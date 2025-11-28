project('bullet-example', 'cpp')

cmake = import('cmake')

### Bullet ###

bullet = cmake.subproject('bullet3')

# Bullet exports these CMake targets:
#   BulletDynamics
#   BulletCollision
#   LinearMath
#   Bullet3Common

dynamics = bullet.target('BulletDynamics')
collision = bullet.target('BulletCollision')
linalg = bullet.target('LinearMath')

bullet_includes  = bullet.include_directories('BulletDynamics')
#cargs = bullet.compile_args() # Not needed?

executable('meson_demo',
  'src/main.cpp',
  link_with: [dynamics, collision, linalg],
  include_directories: bullet_includes,
  #cpp_args: cargs,
)