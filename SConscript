from building import *
Import('rtconfig')

src   = []
cwd   = GetCurrentDir()

# add gt1151 src files.
if GetDepend('PKG_USING_GT1151'):
    src += Glob('src/gt1151.c')

if GetDepend('PKG_USING_GT1151_SAMPLE'):
    src += Glob('samples/gt1151_sample.c')

# add gt1151 include path.
path  = [cwd + '/inc']

# add src and include to group.
group = DefineGroup('gt1151', src, depend = ['PKG_USING_GT1151'], CPPPATH = path)

Return('group')
