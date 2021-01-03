syntax on

set noerrorbells
set tabstop=4 softtabstop=4
set shiftwidth=4
set expandtab
set clipboard=unnamedplus
set smartindent
set ai
set nu
set nowrap
set smartcase
set noswapfile
set nobackup
set undodir=~/.vim/undodir
set undofile
set incsearch

set colorcolumn=80
highlight ColorColumn ctermbg=0 guibg=lightgrey

colorscheme default
set background=dark

call plug#begin('~/.vim/plugged')
Plug 'mbbill/undotree'
Plug 'preservim/nerdtree'
Plug 'SirVer/ultisnips'
Plug 'honza/vim-snippets'
Plug 'tpope/vim-commentary'
Plug 'jiangmiao/auto-pairs'
call plug#end()

nnoremap <SPACE> <Nop>
let mapleader = " " 
let g:NERDTreeWinSize=30
let NERDTreeMinimalUI=1
let g:UltiSnipsExpandTrigger="<tab>"
let g:UltiSnipsEditSplit="vertical"

autocmd bufenter * if (winnr("$") == 1 && exists("b:NERDTree") && b:NERDTree.isTabTree()) | q | endif
map <silent><leader>n :NERDTreeToggle<CR>

autocmd FileType cpp nnoremap     <F5>    :!g++ -g --std=c++11 % -o %:r<CR>
autocmd FileType cpp nnoremap     <F9>    :!./%:r<CR>

nnoremap <silent><leader>h :wincmd h<CR>
nnoremap <silent><leader>l :wincmd l<CR>
nnoremap <silent><leader>w <C-w><C-v><CR>
nnoremap <silent><leader>. :10winc ><CR>
