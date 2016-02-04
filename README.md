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
