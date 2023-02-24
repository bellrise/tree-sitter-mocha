DEST = ~/.local/share/nvim/site/pack/packer/start/nvim-treesitter/queries/mocha

install:
	mkdir -p ${DEST}
	cp -f queries/* ${DEST}
