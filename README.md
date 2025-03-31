# Conversions (numbers)
A library which provides a set of functions for converting numbers to its equivalents in other numbers systems in C.

<h2> Requirements :- </h2>
You need to install this <a href="https://github.com/mfc0d1ng/Handling-dynamic-strings-in-C-language">library</a> for handling dynamic strings.

<br>
<h2> Examples </h2>

* Example A:

<pre>
<code class="language-c">
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include "conversions.h"

int main()
{
    string binary = string_new();

    /* Convert a decimal value (1000) to binary */
    DecToBin(&binary, 1000);

    printf("1000(dec) = %s(bin)\n", string_c_str(&binary));

    string_destructor(&binary);
  
    return EXIT_SUCCESS;
}
</code>
</pre>
