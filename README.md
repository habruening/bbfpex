This reposititory demonstrates some inconsistencies I found in Babashka.

# First Issue

````bb ret0.bb````

This works as expected.

````bb ret0````

This raises an exception with the message "Could not resolve symbol: ELF>"

# Second Issue

````bb ret1.bb````

This works as expected. It raises an exception, because wer return 1.

````bb fpex.bb````

This works as expected. It raises an exception, because it causes an floating point exception.

````bb task-ret0````

This works as expected.

````bb task-ret1````

This does not work as expected. It raises the exception only internally.
This is inconsistent, because the tasks `task-ex` raises an exception.
You could argue that the behaviour of the tasking mechanism is that shell
suppresses excpetions. But when you call shell via another funktion (see
the task `task-shret` an exception is raused. The behacior of `shell` should
not be different. And the exception mechanism should also not behave
differently in both cases.

````bb task-fpex````

Also not as expected.

````bb task-ex````

This works as expected. It raises an exception, because the called code raises it.

````bb task-shex````

This works as expected. It raises an exception, because the called shell command fails.

````bb task-shret1````

This works as expected. It raises an exception, because the called shell command fails.



# Third Issue

Babashka has the command argument `--debug`. But Babashka showed me all these
Exception information including the stack trace already without this argument.

I cannot imagine if anybody would ever want to disable this completely. But
in my opinion, at least the name of the argument is misleading. A name like
`--more-debug` or `java-debug` would fit better.

And `bb --debug task-ret1` should provide more information. If the task
terminates in an abnormal way for me this is an exceptional case. This should
not happen so silently especially when `--debug` is set.
