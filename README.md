libsailing
==========

[![Build Status](https://travis-ci.org/sails-simulator/libsailing.svg?branch=master)](https://travis-ci.org/sails-simulator/libsailing)
[![codecov.io](https://codecov.io/github/sails-simulator/libsailing/coverage.svg?branch=master)](https://codecov.io/github/sails-simulator/libsailing?branch=master)

Low level and efficient functions for simulating physical movements of a
sailing boat.

Developing
----------

###NixOS

Open a shell with dependencies and utilities:

    $ nix-shell -p cmocka gcc pkgconfig clang clang-analyzer valgrind

Build and run tests:

    $ make test

Docker
------

### Building

```
docker build -t sail-simulator/libsailing .
```

### Using the Docker image

As this is a library, you should include this image as part of a multi-stage build. 

```
# Import the library
FROM sails-simulator/libsailing:latest as lib

# Now copy the pre-built libs into your container
FROM alpine:latest

COPY --from=lib /usr/local/lib/libsailing/* /usr/local/lib
COPY --from=lib /usr/local/include/libsailing/* /usr/local/include

# You now have all libsailing *.o and *.h available

```
