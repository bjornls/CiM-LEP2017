# ifndef _CIM_SYSTEM_H

# define _CIM_SYSTEM_H

# include reg.h

# include adder_signed.h

# include multiplier_signed.h

# include mux2.h

# include gt.h

# include nop.h

# include mir.h

# include subtractor_signed.h

# include divider_signed.h

# include <stdio.h>

template < int  input_size  = 8, int  output_size  = 4> class generated_system:sc_module {
  public : sc_in<sc_int<32>> * input_sigs ;
           sc_out<sc_int<32>> * output_sigs ;
           sc_in<bool>  clk ;
           sc_in<bool>  reset ;
           sc_out<bool> * done ;
           sc_in<bool>  valid ;
           multiplier_signed * mod1 ;
           sc_signal<sc_int<32>>  mod1_out ;
           sc_signal<bool>  mod1_out ;
           multiplier_signed * mod2 ;
           sc_signal<sc_int<32>>  mod2_out ;
           sc_signal<bool>  mod2_out ;
           mir * mod3 ;
           sc_signal<sc_int<32>>  mod3_out ;
           sc_signal<bool>  mod3_out ;
           mir * mod4 ;
           sc_signal<sc_int<32>>  mod4_out ;
           sc_signal<bool>  mod4_out ;
           adder_signed * mod5 ;
           sc_signal<sc_int<32>>  mod5_out ;
           sc_signal<bool>  mod5_out ;
           multiplier_signed * mod6 ;
           sc_signal<sc_int<32>>  mod6_out ;
           sc_signal<bool>  mod6_out ;
           multiplier_signed * mod7 ;
           sc_signal<sc_int<32>>  mod7_out ;
           sc_signal<bool>  mod7_out ;
           mir * mod8 ;
           sc_signal<sc_int<32>>  mod8_out ;
           sc_signal<bool>  mod8_out ;
           mir * mod9 ;
           sc_signal<sc_int<32>>  mod9_out ;
           sc_signal<bool>  mod9_out ;
           adder_signed * mod10 ;
           sc_signal<sc_int<32>>  mod10_out ;
           sc_signal<bool>  mod10_out ;
           multiplier_signed * mod11 ;
           sc_signal<sc_int<32>>  mod11_out ;
           sc_signal<bool>  mod11_out ;
           multiplier_signed * mod12 ;
           sc_signal<sc_int<32>>  mod12_out ;
           sc_signal<bool>  mod12_out ;
           mir * mod13 ;
           sc_signal<sc_int<32>>  mod13_out ;
           sc_signal<bool>  mod13_out ;
           mir * mod14 ;
           sc_signal<sc_int<32>>  mod14_out ;
           sc_signal<bool>  mod14_out ;
           adder_signed * mod15 ;
           sc_signal<sc_int<32>>  mod15_out ;
           sc_signal<bool>  mod15_out ;
           multiplier_signed * mod16 ;
           sc_signal<sc_int<32>>  mod16_out ;
           sc_signal<bool>  mod16_out ;
           multiplier_signed * mod17 ;
           sc_signal<sc_int<32>>  mod17_out ;
           sc_signal<bool>  mod17_out ;
           mir * mod18 ;
           sc_signal<sc_int<32>>  mod18_out ;
           sc_signal<bool>  mod18_out ;
           mir * mod19 ;
           sc_signal<sc_int<32>>  mod19_out ;
           sc_signal<bool>  mod19_out ;
           adder_signed * mod20 ;
           sc_signal<sc_int<32>>  mod20_out ;
           sc_signal<bool>  mod20_out ;
           SC_CTOR(generated_system){
      input_sigs  = new sc_in<sc_int<32>>[input_size];
      output_sigs  = new sc_out<sc_int<32>>[output_size];
      done  = new sc_out<bool>[output_size];
      mod1  = new multiplier_signed("mod1");
    mod1->clk(clk);
    mod1->reset(reset);
    mod1->output(mod1_out);
    mod1->done(mod1_done);
    mod1->input1(input_sigs[0]);
    mod1->valid1(valid);
    mod1->input2(input_sigs[4]);
    mod1->valid2(valid);
      mod2  = new multiplier_signed("mod2");
    mod2->clk(clk);
    mod2->reset(reset);
    mod2->output(mod2_out);
    mod2->done(mod2_done);
    mod2->input1(input_sigs[1]);
    mod2->valid1(valid);
    mod2->input2(input_sigs[6]);
    mod2->valid2(valid);
      mod3  = new mir("mod3");
    mod3->clk(clk);
    mod3->reset(reset);
    mod3->output(mod3_out);
    mod3->done(mod3_done);
    mod3->input1(mod2_out);
    mod3->valid1(mod2_done);
      mod4  = new mir("mod4");
    mod4->clk(clk);
    mod4->reset(reset);
    mod4->output(mod4_out);
    mod4->done(mod4_done);
    mod4->input1(mod1_out);
    mod4->valid1(mod1_done);
      mod5  = new adder_signed("mod5");
    mod5->clk(clk);
    mod5->reset(reset);
    mod5->input1(mod4_out);
    mod5->valid1(mod4_done);
    mod5->input2(mod3_out);
    mod5->valid2(mod3_done);
      mod6  = new multiplier_signed("mod6");
    mod6->clk(clk);
    mod6->reset(reset);
    mod6->output(mod6_out);
    mod6->done(mod6_done);
    mod6->input1(input_sigs[0]);
    mod6->valid1(valid);
    mod6->input2(input_sigs[5]);
    mod6->valid2(valid);
      mod7  = new multiplier_signed("mod7");
    mod7->clk(clk);
    mod7->reset(reset);
    mod7->output(mod7_out);
    mod7->done(mod7_done);
    mod7->input1(input_sigs[1]);
    mod7->valid1(valid);
    mod7->input2(input_sigs[7]);
    mod7->valid2(valid);
      mod8  = new mir("mod8");
    mod8->clk(clk);
    mod8->reset(reset);
    mod8->output(mod8_out);
    mod8->done(mod8_done);
    mod8->input1(mod7_out);
    mod8->valid1(mod7_done);
      mod9  = new mir("mod9");
    mod9->clk(clk);
    mod9->reset(reset);
    mod9->output(mod9_out);
    mod9->done(mod9_done);
    mod9->input1(mod6_out);
    mod9->valid1(mod6_done);
      mod10  = new adder_signed("mod10");
    mod10->clk(clk);
    mod10->reset(reset);
    mod10->input1(mod9_out);
    mod10->valid1(mod9_done);
    mod10->input2(mod8_out);
    mod10->valid2(mod8_done);
      mod11  = new multiplier_signed("mod11");
    mod11->clk(clk);
    mod11->reset(reset);
    mod11->output(mod11_out);
    mod11->done(mod11_done);
    mod11->input1(input_sigs[2]);
    mod11->valid1(valid);
    mod11->input2(input_sigs[4]);
    mod11->valid2(valid);
      mod12  = new multiplier_signed("mod12");
    mod12->clk(clk);
    mod12->reset(reset);
    mod12->output(mod12_out);
    mod12->done(mod12_done);
    mod12->input1(input_sigs[3]);
    mod12->valid1(valid);
    mod12->input2(input_sigs[6]);
    mod12->valid2(valid);
      mod13  = new mir("mod13");
    mod13->clk(clk);
    mod13->reset(reset);
    mod13->output(mod13_out);
    mod13->done(mod13_done);
    mod13->input1(mod12_out);
    mod13->valid1(mod12_done);
      mod14  = new mir("mod14");
    mod14->clk(clk);
    mod14->reset(reset);
    mod14->output(mod14_out);
    mod14->done(mod14_done);
    mod14->input1(mod11_out);
    mod14->valid1(mod11_done);
      mod15  = new adder_signed("mod15");
    mod15->clk(clk);
    mod15->reset(reset);
    mod15->input1(mod14_out);
    mod15->valid1(mod14_done);
    mod15->input2(mod13_out);
    mod15->valid2(mod13_done);
      mod16  = new multiplier_signed("mod16");
    mod16->clk(clk);
    mod16->reset(reset);
    mod16->output(mod16_out);
    mod16->done(mod16_done);
    mod16->input1(input_sigs[2]);
    mod16->valid1(valid);
    mod16->input2(input_sigs[5]);
    mod16->valid2(valid);
      mod17  = new multiplier_signed("mod17");
    mod17->clk(clk);
    mod17->reset(reset);
    mod17->output(mod17_out);
    mod17->done(mod17_done);
    mod17->input1(input_sigs[3]);
    mod17->valid1(valid);
    mod17->input2(input_sigs[7]);
    mod17->valid2(valid);
      mod18  = new mir("mod18");
    mod18->clk(clk);
    mod18->reset(reset);
    mod18->output(mod18_out);
    mod18->done(mod18_done);
    mod18->input1(mod17_out);
    mod18->valid1(mod17_done);
      mod19  = new mir("mod19");
    mod19->clk(clk);
    mod19->reset(reset);
    mod19->output(mod19_out);
    mod19->done(mod19_done);
    mod19->input1(mod16_out);
    mod19->valid1(mod16_done);
      mod20  = new adder_signed("mod20");
    mod20->clk(clk);
    mod20->reset(reset);
    mod20->input1(mod19_out);
    mod20->valid1(mod19_done);
    mod20->input2(mod18_out);
    mod20->valid2(mod18_done);
  }
} ;

# endif