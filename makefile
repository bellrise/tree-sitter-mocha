DEST = ~/.local/share/nvim/site/pack/packer/start/nvim-treesitter/queries/mocha

install:
	tree-sitter generate
	mkdir -p ${DEST}
	cp -f queries/* ${DEST}
