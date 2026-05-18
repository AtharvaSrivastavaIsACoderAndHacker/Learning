from manim import *

class Hello(VectorScene, ThreeDScene):
    def construct(self):
        val = ValueTracker(1)
        axes = ThreeDAxes(x_range=[-20,20],x_length=25, y_range=[-10,10], y_length=7, z_range=[-10,10], z_length=7)
        vec = self.add_vector([-1,1],color=YELLOW)
        
        graph = always_redraw(
            lambda: axes.plot(
                lambda x: val.get_value() * x**2,
                x_range=[-10, 10],
                color=BLUE
            )
        )

        gro = VGroup(axes,graph, vec)

        
        self.begin_ambient_camera_rotation(rate=PI/13, about="gamma")
        self.play(DrawBorderThenFill(axes))
        self.play(DrawBorderThenFill(graph))
        self.play(val.animate.set_value(0.01), run_time=3)
        self.play(gro.animate.scale(0.5))
        self.wait()
        