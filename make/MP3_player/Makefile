lib_codec := lib/codec
lib_db    := lib/db
lib_ui    := lib/ui
libraries := $(lib_codec) $(lib_db) $(lib_ui)
player    := app/player

.PHONY : all $(player) $(libraries)
all : $(player)

$(player) $(libraries) :
	$(MAKE) -C $@
$(player) : $(libraries)
$(lib_ui) : $(lib_db) $(lib_codec)
