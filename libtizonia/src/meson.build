install_headers(
   'tizapi_decls.h',
   'tizapi.h',
   'tizaudioport_decls.h',
   'tizaudioport.h',
   'tizbinaryport_decls.h',
   'tizbinaryport.h',
   'tizconfigport_decls.h',
   'tizconfigport.h',
   'tizexecuting.h',
   'tizexecutingtoidle.h',
   'tizfsm_decls.h',
   'tizfsm.h',
   'tizidle.h',
   'tizidletoloaded.h',
   'tizidletoexecuting.h',
   'tizkernel_decls.h',
   'tizkernel.h',
   'tizloaded.h',
   'tizloadedtoidle.h',
   'tizobjsys.h',
   'tizobject_decls.h',
   'tizobject.h',
   'tizotherport_decls.h',
   'tizotherport.h',
   'tizimageport_decls.h',
   'tizimageport.h',
   'tizvideoport_decls.h',
   'tizvideoport.h',
   'tizpause.h',
   'tizpausetoidle.h',
   'tizpcmport_decls.h',
   'tizpcmport.h',
   'tizport_decls.h',
   'tizport.h',
   'tizport-macros.h',
   'tizprc_decls.h',
   'tizprc_internal.h',
   'tizprc.h',
   'tizfilterprc_decls.h',
   'tizfilterprc.h',
   'tizscheduler.h',
   'tizservant_decls.h',
   'tizservant.h',
   'tizstate_decls.h',
   'tizstate.h',
   'tizutils.h',
   'tizwaitforresources.h',
   'tizmp2port_decls.h',
   'tizmp2port.h',
   'tizmp3port_decls.h',
   'tizmp3port.h',
   'tizaacport_decls.h',
   'tizaacport.h',
   'tizvorbisport_decls.h',
   'tizvorbisport.h',
   'tizopusport_decls.h',
   'tizopusport.h',
   'tizflacport_decls.h',
   'tizflacport.h',
   'tizvp8port_decls.h',
   'tizvp8port.h',
   'tizavcport_decls.h',
   'tizavcport.h',
   'tizivrport_decls.h',
   'tizivrport.h',
   'tizdemuxerport_decls.h',
   'tizdemuxerport.h',
   'tizmuxerport_decls.h',
   'tizmuxerport.h',
   'tizwebmport_decls.h',
   'tizwebmport.h',
   'tizmp4port_decls.h',
   'tizmp4port.h',
   'tizoggport_decls.h',
   'tizoggport.h',
   'tizuricfgport.h',
   'tizuricfgport_decls.h',
   'tizdemuxercfgport.h',
   'tizdemuxercfgport_decls.h',
   'tizkernel_helpers.inl',
   'tizkernel_dispatch.inl',
   'tizkernel_internal.h',
   install_dir: tizincludedir
)


libtizonia_sources = [
   'tizscheduler.c',
   'tizobjsys.c',
   'tizobject.c',
   'tizapi.c',
   'tizservant.c',
   'tizfsm.c',
   'tizstate.c',
   'tizloaded.c',
   'tizloadedtoidle.c',
   'tizwaitforresources.c',
   'tizidle.c',
   'tizidletoloaded.c',
   'tizidletoexecuting.c',
   'tizexecuting.c',
   'tizexecutingtoidle.c',
   'tizpause.c',
   'tizpausetoidle.c',
   'tizkernel.c',
   'tizport.c',
   'tizconfigport.c',
   'tizaudioport.c',
   'tizimageport.c',
   'tizvideoport.c',
   'tizotherport.c',
   'tizbinaryport.c',
   'tizpcmport.c',
   'tizprc.c',
   'tizfilterprc.c',
   'tizutils.c',
   'tizmp2port.c',
   'tizmp3port.c',
   'tizaacport.c',
   'tizvorbisport.c',
   'tizopusport.c',
   'tizflacport.c',
   'tizvp8port.c',
   'tizavcport.c',
   'tizivrport.c',
   'tizdemuxerport.c',
   'tizmuxerport.c',
   'tizwebmport.c',
   'tizmp4port.c',
   'tizoggport.c',
   'tizuricfgport.c',
   'tizdemuxercfgport.c'
]

libtizonia = library(
   'tizonia',
   version: tizversion,
   sources: libtizonia_sources,
   dependencies: [
      libtizplatform_dep,
      libtizrmproxy_dep,
      tizrmd_dbus_dep,
      tizilheaders_dep
   ],
   install: true
)

libtizonia_dep = declare_dependency(
    include_directories: include_directories('.'),
    dependencies: [
       tizilheaders_dep,
       libtizplatform_dep,
       libtizrmproxy_dep,
       tizrmd_dbus_dep,
       libtizcore_dep
    ],
    link_with: libtizonia
)
