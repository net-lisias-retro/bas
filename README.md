# bas /L

Bas is an interpreter for the classic dialect of the programming language
BASIC.  It is pretty compatible to typical BASIC interpreters of the 1980s,
unlike some other UNIX BASIC interpreters, that implement a different
syntax, breaking compatibility to existing programs.

This is Lisias' fork, aimed to historical reference and experimentation.


## In a Hurry

* [Latest Release](https://github.com/net-lisias-retro/bas/releases)
* [Source](https://github.com/net-lisias-retro/bas)
* Documentation
	+ [Project's README](https://github.com/net-lisias-retro/bas/blob/master/README.md)
		- [Change Log](./CHANGE_LOG.md)
		- [Known Issues](./KNOWN_ISSUES.md)


## Description

Bas is an interpreter for the classic dialect of the programming language
BASIC.  It is pretty compatible to typical BASIC interpreters of the 1980s,
unlike some other UNIX BASIC interpreters, that implement a different
syntax, breaking compatibility to existing programs.  Bas offers many ANSI
BASIC statements for structured programming, such as procedures, local
variables and various loop types.  Further there are matrix operations,
automatic LIST indentation and many statements and functions found in
specific classic dialects.  Line numbers are not required.

The interpreter tokenises the source and resolves references to variables
and jump targets before running the program.  This compilation pass
increases efficiency and catches syntax errors, type errors and references
to variables that are never initialised.  Bas is written in ANSI C for
UNIX systems.


## License:

This project is licensed as follows:

* [LGPL 2.1](https://www.gnu.org/licenses/lgpl-2.1.html)

Please note that upgrading the license to a future GPL license **IS NOT ALLOWED** for this work, as this author **DID NOT** added the "or (at your option) any later version" on the license.

Please note the copyrights and trademarks in [NOTICE](./NOTICE).


## References

* [Michael Haardt](http://www.moria.de/~michael/)
	+ [Homepage](http://www.moria.de/~michael/bas/) - Latest sources only.
