# The Mynx Web Browser

## Usage
> __mynx__ _filepath_|_url_

## Description

View the web as it once was with the Mynx web browser. A fusion of something between more(1) and lynx(1).
It allows you to surf the web in complete safety and tranquility. The ideal web browser
for small children and their sensitive minds. It contains
a window popup blocker, it filters banner ads, and is easy to configure! 

You can view local HTML files or give an `http://` URL. Simply press
the ENTER key to page down through long documents. To navigate, just type the number
found in square brackets to the left of any link, followed by the ENTER key. To
quit, simply visit link zero (0), or type CTRL+C.

## Features

- A lean simple interface verses
[Mozilla Firefox](http://www.mozilla.org/),
[Opera](http://www.opera.com/), or Internet Explorer.
- Can navigate frames and image links.
- Integrated popup window blocker.
- No forms to fill out.
- No banner ads.
- No cookie crumbs.
- No past to worry about.

## Technical Overview

- Parses well formed XHTML documents as given by the
[W3C XHTML 1.0 Specification](http://www.w3.org/TR/xhtml1/). 
- Recognises the terminal window dimensions and performs line wrapping.
- Supports the ISO 8859-1 character entities, which can be easily redefined.
- The compact HTML scanner supports trivial wildcard matching.
- With minor changes, can be built as a Windows native console application.


## Known Issues

The following issues are related to space constraints:

- HTTP redirection responses (301, 302, 303, and 307) are not handled, assuming 
that a short HTML message with a clickable link will be provided as recommended by 
RFC 2616. However, not all sites properly adhere to this useful recommendation.
Symptoms of this are a couple of blank lines and a return to the prompt after
selecting a link.
- [HTML 4.01](http://www.w3.org/TR/html4/) or older documents should
still display, though the formatting may be a little different as these documents
often omit closing tags for many elements such as: `</p>`, `</li>`
- MIME types other than text/html are not handled.


[Top](manual.html) - [IOCCC](http://www.ioccc.org/) - [USENIX](http://www.usenix.org/) - [SAGE](http://www.sage.org/) - [CNet News](http://www.news.com/) - [Slashdot](http://slashdot.org/)

