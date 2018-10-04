FROM alpine:latest as build

RUN apk update && \
    apk add build-base cmocka-dev pkgconfig clang clang-analyzer valgrind

COPY . /libsailing/

WORKDIR /libsailing

RUN make test

FROM alpine:latest

COPY --from=build /libsailing/*.o /usr/local/lib/libsailing/
COPY --from=build /libsailing/*.h /usr/local/include/libsailing/
