#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import typing as _typing
from thrift.py3.server import RequestContext, ServiceInterface
from abc import abstractmethod

import module.types as _module_types
import include.types as _include_types

_SomeServiceInterfaceT = _typing.TypeVar('_SomeServiceInterfaceT', bound='SomeServiceInterface')


class SomeServiceInterface(
    ServiceInterface
):

    @staticmethod
    def pass_context_bounce_map(
        fn: _typing.Callable[
                [_SomeServiceInterfaceT, RequestContext, _typing.Mapping[int, str]],
                _typing.Awaitable[_typing.Mapping[int, str]]
        ]
    ) -> _typing.Callable[
        [_SomeServiceInterfaceT, _typing.Mapping[int, str]],
        _typing.Awaitable[_typing.Mapping[int, str]]
    ]: ...

    @abstractmethod
    async def bounce_map(
        self,
        m: _typing.Mapping[int, str]
    ) -> _typing.Mapping[int, str]: ...


