This reposititory demonstrates an inconsistencies I found in Babashka.

`bb task-ret1` terminates with a short error message while `bb task-shret1` terminates and provides all the exception information.

It is confusing for users, that babashka.process/shell behaves differently in both cases or that the exception mechanism behaves differently in both cases.
