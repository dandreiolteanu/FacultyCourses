// JQUERY
// $(function() {
//   $(".small-images").hover(function(e) {
//     var imageSrc = $(this).attr("src");
//     var imageName = $(this).attr("alt");
//     var href = $(this).attr("href");
//     $(".big-image img").attr("src", imageSrc);
//     $(".big-image h3").html(imageName);
//     e.preventDefault();
//     return false;
//   });
// });

// JAVASCRIPT
function change(imgTag) {
  var imgSrc = imgTag.getAttribute('src');
  var imgName = imgTag.getAttribute('alt');
  var bigImage = document.getElementById('bigImage');
  bigImage.src = imgSrc;
  var headerBigImage = document.getElementById('bigImageTitle');
  headerBigImage.textContent = imgName
}