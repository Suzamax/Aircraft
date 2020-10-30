compiler = meson.get_compiler('cpp')
dir_base = meson.current_source_dir()

aircraft_sources = [
  'main.cpp',
  'aircraft-window.cpp',
  'tg_auth.cpp',
  'tg_client.cpp',
  'tg_thread.cpp',
]

tdactor = compiler.find_library('tdactor', dirs : [join_paths(dir_base, '../lib') ])
tdapi = compiler.find_library('tdapi', dirs : [join_paths(dir_base, '../lib') ])
tdclient = compiler.find_library('tdclient', dirs : [join_paths(dir_base, '../lib') ])
tdcore = compiler.find_library('tdcore', dirs : [join_paths(dir_base, '../lib') ])
tddb = compiler.find_library('tddb', dirs : [join_paths(dir_base, '../lib') ])
tdjson = compiler.find_library('tdjson', dirs : [join_paths(dir_base, '../lib') ])
tdjson_private = compiler.find_library('tdjson_private', dirs : [join_paths(dir_base, '../lib') ])
tdjson_static = compiler.find_library('tdjson_static', dirs : [join_paths(dir_base, '../lib') ])
tdnet = compiler.find_library('tdnet', dirs : [join_paths(dir_base, '../lib') ])
tdsqlite = compiler.find_library('tdsqlite', dirs : [join_paths(dir_base, '../lib') ])
tdutils = compiler.find_library('tdutils', dirs : [join_paths(dir_base, '../lib') ])

aircraft_deps = [
  dependency('gtkmm-3.0', version: '>= 3.18'),
  tdactor,
  tdapi,
  tdclient,
  tdcore,
  tddb,
  tdjson,
  tdjson_private,
  tdjson_static,
  tdnet,
  tdsqlite,
  tdutils,
]

telegram_includes = include_directories('../include')

gnome = import('gnome')

aircraft_sources += gnome.compile_resources('aircraft-resources',
  'aircraft.gresource.xml',
  c_name: 'aircraft'
)

executable('aircraft', aircraft_sources,
  dependencies: aircraft_deps,
  install: true,
  include_directories: telegram_includes,
)
