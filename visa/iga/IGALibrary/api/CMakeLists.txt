set(IGA_API
  ${CMAKE_CURRENT_SOURCE_DIR}/iga.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/kv.cpp
  PARENT_SCOPE
)
set(IGA_API_HeadersOpen
  ${CMAKE_CURRENT_SOURCE_DIR}/iga.h
  ${CMAKE_CURRENT_SOURCE_DIR}/iga.hpp
  ${CMAKE_CURRENT_SOURCE_DIR}/iga_bxml_ops.hpp
  ${CMAKE_CURRENT_SOURCE_DIR}/iga_types_ext.hpp
  ${CMAKE_CURRENT_SOURCE_DIR}/igad.h
  ${CMAKE_CURRENT_SOURCE_DIR}/igax.hpp
  ${CMAKE_CURRENT_SOURCE_DIR}/kv.h
  ${CMAKE_CURRENT_SOURCE_DIR}/kv.hpp
)

set(IGA_API_Headers
  ${IGA_API_HeadersOpen}
  ${IGA_API_HeadersEmbargoed}
  PARENT_SCOPE
  )

set(IGA_API_EncoderInterface
  ${CMAKE_CURRENT_SOURCE_DIR}/igaEncoderWrapper.hpp
  ${CMAKE_CURRENT_SOURCE_DIR}/igaEncoderWrapper.cpp
  PARENT_SCOPE
)