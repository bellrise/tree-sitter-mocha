DEST = ~/.local/share/nvim/site/pack/packer/start/nvim-treesitter/queries/coffee

install:
	mkdir -p ${DEST}
	cp -f queries/* ${DEST}
