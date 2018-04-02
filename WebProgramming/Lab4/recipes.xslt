<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:template match="/">
  <html>
    <head>
      <link rel="stylesheet" type="text/css" href="display_style.css"/>
    </head>
    <body>
      <table class="main-section" border="1">
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
