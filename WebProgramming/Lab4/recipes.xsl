<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0"
xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

<xsl:template match="/">
  <html>
  <head>
<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css" integrity="sha384-BVYiiSIFeK1dGmJRAkycuHAHRg32OmUcww7on3RYdg4Va+PmSTsz/K68vbdEjh4u" crossorigin="anonymous">
</link> 
</head>
  <body>
      <table class="main-section table table-hover" border="1">
        <tr class="header-row">
          <th>Name</th>
          <th>Image</th>
          <th>Ingredients</th>
          <th>Preparation</th>
        </tr>
        <xsl:for-each select="entries/entry">
          <tr class="data-row">
            <td class="name-data">
              <xsl:value-of select="name"/>
            </td>
            <td class="photo-data">
                  <img src="{photo}"/>
            </td>
            <td class="ingredients-data">
              <xsl:value-of select="ingretients"/>
            </td>
            <td class="preparation-data">
              <xsl:value-of select="preparation"/>
            </td>
          </tr>
        </xsl:for-each>
      </table>
    </body>
  </html>
</xsl:template>
</xsl:stylesheet>