#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <netinet/in.h>
#include <netinet/ip.h>
#include <string.h>
 
int main() {
       int s;
       struct sockaddr_in server, client;
       int c, l;
 
       s = socket(AF_INET, SOCK_STREAM, 0);
       if (s < 0) {
              printf("Eroare la crearea socketului server\n");
              return 1;
       }
 
       memset(&server, 0, sizeof(server));
       server.sin_port = htons(1234);
       server.sin_family = AF_INET;
       server.sin_addr.s_addr = INADDR_ANY;
 
       if (bind(s, (struct sockaddr *) &server, sizeof(server)) < 0) {
              printf("Eroare la bind\n");
              return 1;
       }
 
       listen(s, 5);
 
       l = sizeof(client);
       memset(&client, 0, sizeof(client));
 
       while (1) {

              char x, sir[300], ogl[300];
              uint16_t i;
              int j = 0;

              c = accept(s, (struct sockaddr *) &client, &l);

              recv(c, &i, sizeof(int), MSG_WAITALL);
              i = ntohs(i);
              printf("Am primit %d\n",i);

              while (j < i) {

              printf("Acum astept sa primesc\n");
              recv(c, &x, sizeof(char), MSG_WAITALL);
              printf("Am primit %c\n",x );
              sir[j] = x;
              j = j + 1;

              }

              int len = i - 1;
              int k = 0;
              for (int j = len; j > 0; i--)
              {
                     ogl[k] = sir[j];
                     k = k + 1;
              }
              
              printf("Sirul trimis va fi %s\n", ogl);
              send(c, &ogl, sizeof(char)*i, 0);
           

             printf("S-a conectat un client.\n");
             printf("Sirul primit este %s\n", sir);

              
              // deservirea clientului
              
              close(c);
              // sfarsitul deservirii clientului;
       }
}
 