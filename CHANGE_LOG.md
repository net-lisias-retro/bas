# bas/L :: Change Log

* 2023-0000: 2.6 (Michael Haardt). UNRELEASED.
	+ Only evaluate TO and STEP expressions once
	+ Evaluate TO expression before evaluating the loop assignment
	+ Fixed times() to have an argument for portability.
	+ Check for log2 for not depending on C99
	+ Check more gcc warnings being supported
	+ Fixed various warnings
	+ INC/DEC/INPUT/READ of local variable works
	+ Prefer gettimeofday() over times() for TIME implementation
	+ Accept "pr" as another shortcut for "print"
	+ Added option -d to convert DO to REPEAT
	+ Added rnd(a,b) for a range
	+ Added commandcount()
	+ Use setenv instead of putenv
	+ Check MID$ assignment overrun
	+ Add optional status to SYSTEM
	+ Keep first #! line when saving a program
	+ INPUT from closed channel fixed
	+ ON ERROR no longer catches terminal interrupt
	+ A relative program file name is converted to an absolute pathname for SAVE without arguments saving it back to the original file.
	+ FNEND explained in manual
* 2019-0509: 2.5 (Michael Haardt).
	+ truncate bug fixed
	+ Multi line if with hanging comment works now
	+ Add files command
	+ Fixed bug in expression parser
	+ OPTION BASE bug fixed
	+ Matrix inversion test improved
	+ WIDTH 0 bug fixed
	+ Missing error check on multi assignments added
	+ Wrong FOR loop management fixed
	+ Replaced wrong int assignment with long assignment for integers
	+ unnum bugs fixed
	+ HP-UX build works again
* 2013-0620: 2.4 (Michael Haardt).
	+ Matrix inversion on integer arrays with option base 1 fixed
	+ PRINT USING behaviour for ! fixed
	+ PRINT , separator should advance to the next zone, even if the current position is at the start of a zone
	+ Added ip(), frac(), fp(), log10(), log2(), min() and max()
	+ Fixed NEXT checking the variable case sensitive
	+ Use terminfo capability cr to make use of its padding
	+ LET segmentation fault fixed
	+ PRINT now uses print items
	+ -r for restricted operation

Previous versions are M.I.A.
