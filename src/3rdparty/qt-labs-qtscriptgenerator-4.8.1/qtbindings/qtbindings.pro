include (../../../../shared.pri)
TEMPLATE = subdirs
SUBDIRS = qtscript_core \
	  qtscript_gui \
	  qtscript_opengl \
	  qtscript_sql \
	  qtscript_svg \
	  qtscript_xml \
	  qtscript_phonon \
	  qtscript_webkit \
	  qtscript_xmlpatterns \
	  qtscript_uitools \
	  qs_eval

!win32 {
    SUBDIRS += qtscript_network
}
