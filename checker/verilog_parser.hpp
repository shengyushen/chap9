// A Bison parser, made by GNU Bison 3.0.2.

// Skeleton interface for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2013 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

/**
 ** \file verilog_parser.hpp
 ** Define the yy::parser class.
 */

// C++ LALR(1) parser skeleton written by Akim Demaille.

#ifndef YY_YY_VERILOG_PARSER_HPP_INCLUDED
# define YY_YY_VERILOG_PARSER_HPP_INCLUDED

# include <cassert>
# include <vector>
# include <iostream>
# include <stdexcept>
# include <string>
# include "stack.hh"
# include "location.hh"
#include <typeinfo>
#ifndef YYASSERT
# include <cassert>
# define YYASSERT assert
#endif


#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif


namespace yy {
#line 118 "verilog_parser.hpp" // lalr1.cc:372



  /// A char[S] buffer to store and retrieve objects.
  ///
  /// Sort of a variant, but does not keep track of the nature
  /// of the stored data, since that knowledge is available
  /// via the current state.
  template <size_t S>
  struct variant
  {
    /// Type of *this.
    typedef variant<S> self_type;

    /// Empty construction.
    variant ()
      : yytname_ (YY_NULLPTR)
    {}

    /// Construct and fill.
    template <typename T>
    variant (const T& t)
      : yytname_ (typeid (T).name ())
    {
      YYASSERT (sizeof (T) <= S);
      new (yyas_<T> ()) T (t);
    }

    /// Destruction, allowed only if empty.
    ~variant ()
    {
      YYASSERT (!yytname_);
    }

    /// Instantiate an empty \a T in here.
    template <typename T>
    T&
    build ()
    {
      YYASSERT (!yytname_);
      YYASSERT (sizeof (T) <= S);
      yytname_ = typeid (T).name ();
      return *new (yyas_<T> ()) T;
    }

    /// Instantiate a \a T in here from \a t.
    template <typename T>
    T&
    build (const T& t)
    {
      YYASSERT (!yytname_);
      YYASSERT (sizeof (T) <= S);
      yytname_ = typeid (T).name ();
      return *new (yyas_<T> ()) T (t);
    }

    /// Accessor to a built \a T.
    template <typename T>
    T&
    as ()
    {
      YYASSERT (yytname_ == typeid (T).name ());
      YYASSERT (sizeof (T) <= S);
      return *yyas_<T> ();
    }

    /// Const accessor to a built \a T (for %printer).
    template <typename T>
    const T&
    as () const
    {
      YYASSERT (yytname_ == typeid (T).name ());
      YYASSERT (sizeof (T) <= S);
      return *yyas_<T> ();
    }

    /// Swap the content with \a other, of same type.
    ///
    /// Both variants must be built beforehand, because swapping the actual
    /// data requires reading it (with as()), and this is not possible on
    /// unconstructed variants: it would require some dynamic testing, which
    /// should not be the variant's responsability.
    /// Swapping between built and (possibly) non-built is done with
    /// variant::move ().
    template <typename T>
    void
    swap (self_type& other)
    {
      YYASSERT (yytname_);
      YYASSERT (yytname_ == other.yytname_);
      std::swap (as<T> (), other.as<T> ());
    }

    /// Move the content of \a other to this.
    ///
    /// Destroys \a other.
    template <typename T>
    void
    move (self_type& other)
    {
      build<T> ();
      swap<T> (other);
      other.destroy<T> ();
    }

    /// Copy the content of \a other to this.
    template <typename T>
    void
    copy (const self_type& other)
    {
      build<T> (other.as<T> ());
    }

    /// Destroy the stored \a T.
    template <typename T>
    void
    destroy ()
    {
      as<T> ().~T ();
      yytname_ = YY_NULLPTR;
    }

  private:
    /// Prohibit blind copies.
    self_type& operator=(const self_type&);
    variant (const self_type&);

    /// Accessor to raw memory as \a T.
    template <typename T>
    T*
    yyas_ ()
    {
      void *yyp = yybuffer_.yyraw;
      return static_cast<T*> (yyp);
     }

    /// Const accessor to raw memory as \a T.
    template <typename T>
    const T*
    yyas_ () const
    {
      const void *yyp = yybuffer_.yyraw;
      return static_cast<const T*> (yyp);
     }

    union
    {
      /// Strongest alignment constraints.
      long double yyalign_me;
      /// A buffer large enough to store any of the semantic values.
      char yyraw[S];
    } yybuffer_;

    /// Whether the content is built: if defined, the name of the stored type.
    const char *yytname_;
  };


  /// A Bison parser.
  class verilog_parser
  {
  public:
#ifndef YYSTYPE
    /// An auxiliary type to compute the largest semantic type.
    union union_type
    {
      // automatic_opt
      char dummy1[sizeof(Verilogast::automatic)];

      // charge_strength
      char dummy2[sizeof(Verilogast::charge_strength)];

      // cmos_switchtype
      char dummy3[sizeof(Verilogast::cmos_switchtype)];

      // edge_identifier_opt
      // edge_identifier
      char dummy4[sizeof(Verilogast::edge_identifier)];

      // edge_symbol
      char dummy5[sizeof(Verilogast::edge_symbol)];

      // enable_gatetype
      char dummy6[sizeof(Verilogast::enable_gatetype)];

      // io_type
      char dummy7[sizeof(Verilogast::io_type)];

      // level_symbol
      char dummy8[sizeof(Verilogast::level_symbol)];

      // mos_switchtype
      char dummy9[sizeof(Verilogast::mos_switchtype)];

      // n_input_gatetype
      char dummy10[sizeof(Verilogast::n_input_gatetype)];

      // n_output_gatetype
      char dummy11[sizeof(Verilogast::n_output_gatetype)];

      // net_type_opt
      // net_type
      char dummy12[sizeof(Verilogast::net_type)];

      // output_variable_type
      char dummy13[sizeof(Verilogast::output_variable_type)];

      // parameter_type
      char dummy14[sizeof(Verilogast::parameter_type)];

      // pass_en_switchtype
      char dummy15[sizeof(Verilogast::pass_en_switchtype)];

      // pass_switchtype
      char dummy16[sizeof(Verilogast::pass_switchtype)];

      // polarity_operator_opt
      // polarity_operator
      char dummy17[sizeof(Verilogast::polarity_operator)];

      // reg_opt
      char dummy18[sizeof(Verilogast::reg)];

      // signed_opt
      char dummy19[sizeof(Verilogast::signedType)];

      // strength0
      // strength1
      char dummy20[sizeof(Verilogast::strength)];

      // task_port_type
      char dummy21[sizeof(Verilogast::task_port_type)];

      // vectored_scalared_opt
      char dummy22[sizeof(Verilogast::vectored_scalared)];

      // z_or_x
      char dummy23[sizeof(Verilogast::z_or_x)];

      // zero_or_one
      char dummy24[sizeof(Verilogast::zero_or_one)];

      // module_keyword
      // key_input_opt
      // or_comma
      char dummy25[sizeof(int)];

      // always_construct
      char dummy26[sizeof(std::shared_ptr<Verilogast::always_construct>)];

      // attr_spec
      char dummy27[sizeof(std::shared_ptr<Verilogast::attr_spec>)];

      // attribute_instance
      char dummy28[sizeof(std::shared_ptr<Verilogast::attribute_instance>)];

      // attribute_instance_list_tf_input_declaration
      char dummy29[sizeof(std::shared_ptr<Verilogast::attribute_instance_list_tf_input_declaration>)];

      // block_item_declaration
      char dummy30[sizeof(std::shared_ptr<Verilogast::block_item_declaration>)];

      // block_real_type
      char dummy31[sizeof(std::shared_ptr<Verilogast::block_real_type>)];

      // block_variable_type
      char dummy32[sizeof(std::shared_ptr<Verilogast::block_variable_type>)];

      // blocking_assignment
      char dummy33[sizeof(std::shared_ptr<Verilogast::blocking_assignment>)];

      // case_generate_construct
      char dummy34[sizeof(std::shared_ptr<Verilogast::case_generate_construct>)];

      // case_generate_item
      char dummy35[sizeof(std::shared_ptr<Verilogast::case_generate_item>)];

      // case_item
      char dummy36[sizeof(std::shared_ptr<Verilogast::case_item>)];

      // case_statement
      char dummy37[sizeof(std::shared_ptr<Verilogast::case_statement>)];

      // checktime_condition_opt
      // checktime_condition
      char dummy38[sizeof(std::shared_ptr<Verilogast::checktime_condition>)];

      // cmos_switch_instance
      char dummy39[sizeof(std::shared_ptr<Verilogast::cmos_switch_instance>)];

      // colon_block_identifier_opt
      char dummy40[sizeof(std::shared_ptr<Verilogast::colon_block_identifier>)];

      // colon_opt
      char dummy41[sizeof(std::shared_ptr<Verilogast::colon_opt>)];

      // concatenation
      char dummy42[sizeof(std::shared_ptr<Verilogast::concatenation>)];

      // conditional_expression
      char dummy43[sizeof(std::shared_ptr<Verilogast::conditional_expression>)];

      // conditional_generate_construct
      char dummy44[sizeof(std::shared_ptr<Verilogast::conditional_generate_construct>)];

      // conditional_statement
      char dummy45[sizeof(std::shared_ptr<Verilogast::conditional_statement>)];

      // continuous_assign
      char dummy46[sizeof(std::shared_ptr<Verilogast::continuous_assign>)];

      // controlled_reference_event
      char dummy47[sizeof(std::shared_ptr<Verilogast::controlled_reference_event>)];

      // controlled_timing_check_event
      char dummy48[sizeof(std::shared_ptr<Verilogast::controlled_timing_check_event>)];

      // data_event
      char dummy49[sizeof(std::shared_ptr<Verilogast::data_event>)];

      // defparam_assignment
      char dummy50[sizeof(std::shared_ptr<Verilogast::defparam_assignment>)];

      // delay2
      // delay2_opt
      char dummy51[sizeof(std::shared_ptr<Verilogast::delay2>)];

      // delay3_opt
      // delay3
      char dummy52[sizeof(std::shared_ptr<Verilogast::delay3>)];

      // delay_control
      char dummy53[sizeof(std::shared_ptr<Verilogast::delay_control>)];

      // delay_or_event_control_opt
      // delay_or_event_control
      char dummy54[sizeof(std::shared_ptr<Verilogast::delay_or_event_control>)];

      // delay_value
      char dummy55[sizeof(std::shared_ptr<Verilogast::delay_value>)];

      // delayed_data_opt
      // delayed_data
      char dummy56[sizeof(std::shared_ptr<Verilogast::delayed_data>)];

      // delayed_reference_opt
      // delayed_reference
      char dummy57[sizeof(std::shared_ptr<Verilogast::delayed_reference>)];

      // description
      char dummy58[sizeof(std::shared_ptr<Verilogast::description>)];

      // dimension
      char dummy59[sizeof(std::shared_ptr<Verilogast::dimension>)];

      // disable_statement
      char dummy60[sizeof(std::shared_ptr<Verilogast::disable_statement>)];

      // dollor_fullskew_timing_check
      char dummy61[sizeof(std::shared_ptr<Verilogast::dollor_fullskew_timing_check>)];

      // dollor_hold_timing_check
      char dummy62[sizeof(std::shared_ptr<Verilogast::dollor_hold_timing_check>)];

      // dollor_nochange_timing_check
      char dummy63[sizeof(std::shared_ptr<Verilogast::dollor_nochange_timing_check>)];

      // dollor_period_timing_check
      char dummy64[sizeof(std::shared_ptr<Verilogast::dollor_period_timing_check>)];

      // dollor_recovery_timing_check
      char dummy65[sizeof(std::shared_ptr<Verilogast::dollor_recovery_timing_check>)];

      // dollor_recrem_timing_check
      char dummy66[sizeof(std::shared_ptr<Verilogast::dollor_recrem_timing_check>)];

      // dollor_removal_timing_check
      char dummy67[sizeof(std::shared_ptr<Verilogast::dollor_removal_timing_check>)];

      // dollor_setup_timing_check
      char dummy68[sizeof(std::shared_ptr<Verilogast::dollor_setup_timing_check>)];

      // dollor_setuphold_timing_check
      char dummy69[sizeof(std::shared_ptr<Verilogast::dollor_setuphold_timing_check>)];

      // dollor_skew_timing_check
      char dummy70[sizeof(std::shared_ptr<Verilogast::dollor_skew_timing_check>)];

      // dollor_timeskew_timing_check
      char dummy71[sizeof(std::shared_ptr<Verilogast::dollor_timeskew_timing_check>)];

      // dollor_width_timing_check
      char dummy72[sizeof(std::shared_ptr<Verilogast::dollor_width_timing_check>)];

      // drive_strength_opt
      // drive_strength
      char dummy73[sizeof(std::shared_ptr<Verilogast::drive_strength>)];

      // edge_control_specifier
      char dummy74[sizeof(std::shared_ptr<Verilogast::edge_control_specifier>)];

      // edge_descriptor
      char dummy75[sizeof(std::shared_ptr<Verilogast::edge_descriptor>)];

      // edge_indicator
      char dummy76[sizeof(std::shared_ptr<Verilogast::edge_indicator>)];

      // edge_input_list
      char dummy77[sizeof(std::shared_ptr<Verilogast::edge_input_list>)];

      // edge_sensitive_path_declaration
      char dummy78[sizeof(std::shared_ptr<Verilogast::edge_sensitive_path_declaration>)];

      // enable_gate_instance
      char dummy79[sizeof(std::shared_ptr<Verilogast::enable_gate_instance>)];

      // end_edge_offset
      char dummy80[sizeof(std::shared_ptr<Verilogast::end_edge_offset>)];

      // event_based_flag_opt
      // event_based_flag
      char dummy81[sizeof(std::shared_ptr<Verilogast::event_based_flag>)];

      // event_control
      char dummy82[sizeof(std::shared_ptr<Verilogast::event_control>)];

      // event_declaration
      char dummy83[sizeof(std::shared_ptr<Verilogast::event_declaration>)];

      // event_expression
      char dummy84[sizeof(std::shared_ptr<Verilogast::event_expression>)];

      // event_identifier_dimension_list
      char dummy85[sizeof(std::shared_ptr<Verilogast::event_identifier_dimension_list>)];

      // event_trigger
      char dummy86[sizeof(std::shared_ptr<Verilogast::event_trigger>)];

      // equ1_expression_opt
      // enable_terminal
      // input_terminal
      // ncontrol_terminal
      // inout_terminal
      // output_terminal
      // pcontrol_terminal
      // expression_opt
      // data_source_expression
      // and3_timing_check_condition_opt
      // base_expression
      // dimension_expression
      // expression
      // width_expression
      char dummy87[sizeof(std::shared_ptr<Verilogast::expression>)];

      // full_edge_sensitive_path_description
      char dummy88[sizeof(std::shared_ptr<Verilogast::full_edge_sensitive_path_description>)];

      // full_path_description
      char dummy89[sizeof(std::shared_ptr<Verilogast::full_path_description>)];

      // function_call
      char dummy90[sizeof(std::shared_ptr<Verilogast::function_call>)];

      // function_declaration
      char dummy91[sizeof(std::shared_ptr<Verilogast::function_declaration>)];

      // function_item_declaration
      char dummy92[sizeof(std::shared_ptr<Verilogast::function_item_declaration>)];

      // function_range_or_type
      char dummy93[sizeof(std::shared_ptr<Verilogast::function_range_or_type>)];

      // gate_instantiation
      char dummy94[sizeof(std::shared_ptr<Verilogast::gate_instantiation>)];

      // else_generate_block_or_null_opt
      // generate_block
      // generate_block_or_null
      char dummy95[sizeof(std::shared_ptr<Verilogast::generate_block>)];

      // generate_region
      char dummy96[sizeof(std::shared_ptr<Verilogast::generate_region>)];

      // genvar_declaration
      char dummy97[sizeof(std::shared_ptr<Verilogast::genvar_declaration>)];

      // genvar_initialization
      char dummy98[sizeof(std::shared_ptr<Verilogast::genvar_initialization>)];

      // genvar_iteration
      char dummy99[sizeof(std::shared_ptr<Verilogast::genvar_iteration>)];

      // hierarchical_identifier
      char dummy100[sizeof(std::shared_ptr<Verilogast::hierarchical_identifier>)];

      // colon_generate_block_identifier_opt
      // attr_name
      // block_identifier
      // event_identifier
      // function_identifier
      // gate_instance_identifier
      // generate_block_identifier
      // genvar_identifier
      // identifier
      // input_port_identifier
      // module_instance_identifier
      // net_identifier
      // output_port_identifier
      // parameter_identifier
      // port_identifier
      // real_identifier
      // specparam_identifier
      // task_identifier
      // terminal_identifier
      // variable_identifier
      char dummy101[sizeof(std::shared_ptr<Verilogast::identifier>)];

      // identifier_lsq_expression_rsq_opt
      char dummy102[sizeof(std::shared_ptr<Verilogast::identifier_lsq_expression_rsq>)];

      // if_generate_construct
      char dummy103[sizeof(std::shared_ptr<Verilogast::if_generate_construct>)];

      // init_val
      char dummy104[sizeof(std::shared_ptr<Verilogast::init_val>)];

      // initial_construct
      char dummy105[sizeof(std::shared_ptr<Verilogast::initial_construct>)];

      // inout_declaration
      char dummy106[sizeof(std::shared_ptr<Verilogast::inout_declaration>)];

      // input_declaration
      char dummy107[sizeof(std::shared_ptr<Verilogast::input_declaration>)];

      // integer_declaration
      char dummy108[sizeof(std::shared_ptr<Verilogast::integer_declaration>)];

      // path_delay_value
      // list_of_path_delay_expressions
      char dummy109[sizeof(std::shared_ptr<Verilogast::list_of_path_delay_expressions>)];

      // list_of_port_connections
      char dummy110[sizeof(std::shared_ptr<Verilogast::list_of_port_connections>)];

      // local_parameter_declaration
      char dummy111[sizeof(std::shared_ptr<Verilogast::local_parameter_declaration>)];

      // loop_generate_construct
      char dummy112[sizeof(std::shared_ptr<Verilogast::loop_generate_construct>)];

      // loop_statement
      char dummy113[sizeof(std::shared_ptr<Verilogast::loop_statement>)];

      // comma_error_limit_value_opt
      // error_limit_value
      // reject_limit_value
      // limit_value
      // ordered_parameter_assignment
      // mintypmax_expression_opt
      // mintypmax_expression
      char dummy114[sizeof(std::shared_ptr<Verilogast::mintypmax_expression>)];

      // module_declaration
      char dummy115[sizeof(std::shared_ptr<Verilogast::module_declaration>)];

      // module_instance
      char dummy116[sizeof(std::shared_ptr<Verilogast::module_instance>)];

      // module_instantiation
      char dummy117[sizeof(std::shared_ptr<Verilogast::module_instantiation>)];

      // module_item
      // non_port_module_item
      // module_or_generate_item
      char dummy118[sizeof(std::shared_ptr<Verilogast::module_item>)];

      // mos_switch_instance
      char dummy119[sizeof(std::shared_ptr<Verilogast::mos_switch_instance>)];

      // multiple_concatenation
      char dummy120[sizeof(std::shared_ptr<Verilogast::multiple_concatenation>)];

      // n_input_gate_instance
      char dummy121[sizeof(std::shared_ptr<Verilogast::n_input_gate_instance>)];

      // n_output_gate_instance
      char dummy122[sizeof(std::shared_ptr<Verilogast::n_output_gate_instance>)];

      // name_of_gate_instance_opt
      // name_of_gate_instance
      char dummy123[sizeof(std::shared_ptr<Verilogast::name_of_gate_instance>)];

      // name_of_module_instance_opt
      // name_of_module_instance
      char dummy124[sizeof(std::shared_ptr<Verilogast::name_of_module_instance>)];

      // named_parameter_assignment
      char dummy125[sizeof(std::shared_ptr<Verilogast::named_parameter_assignment>)];

      // named_port_connection
      char dummy126[sizeof(std::shared_ptr<Verilogast::named_port_connection>)];

      // net_assignment
      char dummy127[sizeof(std::shared_ptr<Verilogast::net_assignment>)];

      // net_decl_assignment
      char dummy128[sizeof(std::shared_ptr<Verilogast::net_decl_assignment>)];

      // net_declaration
      char dummy129[sizeof(std::shared_ptr<Verilogast::net_declaration>)];

      // net_identifier_dimension_list
      char dummy130[sizeof(std::shared_ptr<Verilogast::net_identifier_dimension_list>)];

      // net_lvalue
      char dummy131[sizeof(std::shared_ptr<Verilogast::net_lvalue>)];

      // nonblocking_assignment
      char dummy132[sizeof(std::shared_ptr<Verilogast::nonblocking_assignment>)];

      // notifier_opt
      // notifier
      char dummy133[sizeof(std::shared_ptr<Verilogast::notifier>)];

      // number
      char dummy134[sizeof(std::shared_ptr<Verilogast::number>)];

      // ordered_port_connection
      char dummy135[sizeof(std::shared_ptr<Verilogast::ordered_port_connection>)];

      // output_declaration
      char dummy136[sizeof(std::shared_ptr<Verilogast::output_declaration>)];

      // par_block
      char dummy137[sizeof(std::shared_ptr<Verilogast::par_block>)];

      // parallel_edge_sensitive_path_description
      char dummy138[sizeof(std::shared_ptr<Verilogast::parallel_edge_sensitive_path_description>)];

      // parallel_path_description
      char dummy139[sizeof(std::shared_ptr<Verilogast::parallel_path_description>)];

      // param_assignment
      char dummy140[sizeof(std::shared_ptr<Verilogast::param_assignment>)];

      // parameter_declaration
      char dummy141[sizeof(std::shared_ptr<Verilogast::parameter_declaration>)];

      // parameter_value_assignment_opt
      // parameter_value_assignment
      // list_of_parameter_assignments
      char dummy142[sizeof(std::shared_ptr<Verilogast::parameter_value_assignment>)];

      // pass_enable_switch_instance
      char dummy143[sizeof(std::shared_ptr<Verilogast::pass_enable_switch_instance>)];

      // pass_switch_instance
      char dummy144[sizeof(std::shared_ptr<Verilogast::pass_switch_instance>)];

      // path_declaration
      char dummy145[sizeof(std::shared_ptr<Verilogast::path_declaration>)];

      // port
      char dummy146[sizeof(std::shared_ptr<Verilogast::port>)];

      // port_declaration
      char dummy147[sizeof(std::shared_ptr<Verilogast::port_declaration>)];

      // port_expression_opt
      // port_expression
      char dummy148[sizeof(std::shared_ptr<Verilogast::port_expression>)];

      // port_identifier_equ1_expression_opt
      char dummy149[sizeof(std::shared_ptr<Verilogast::port_identifier_equ1_expression_opt>)];

      // port_reference
      char dummy150[sizeof(std::shared_ptr<Verilogast::port_reference>)];

      // primary
      char dummy151[sizeof(std::shared_ptr<Verilogast::primary>)];

      // procedural_continuous_assignments
      char dummy152[sizeof(std::shared_ptr<Verilogast::procedural_continuous_assignments>)];

      // procedural_timing_control
      char dummy153[sizeof(std::shared_ptr<Verilogast::procedural_timing_control>)];

      // procedural_timing_control_statement
      char dummy154[sizeof(std::shared_ptr<Verilogast::procedural_timing_control_statement>)];

      // pull_gate_instance
      char dummy155[sizeof(std::shared_ptr<Verilogast::pull_gate_instance>)];

      // pulldown_strength_opt
      // pulldown_strength
      char dummy156[sizeof(std::shared_ptr<Verilogast::pulldown_strength>)];

      // pullup_strength_opt
      // pullup_strength
      char dummy157[sizeof(std::shared_ptr<Verilogast::pullup_strength>)];

      // pulsestyle_declaration
      char dummy158[sizeof(std::shared_ptr<Verilogast::pulsestyle_declaration>)];

      // range_opt
      // range
      char dummy159[sizeof(std::shared_ptr<Verilogast::range>)];

      // lsquare_range_expression_rsquare_opt
      // lsquare_range_expression_rsquare
      char dummy160[sizeof(std::shared_ptr<Verilogast::range_expression>)];

      // real_declaration
      char dummy161[sizeof(std::shared_ptr<Verilogast::real_declaration>)];

      // real_type
      char dummy162[sizeof(std::shared_ptr<Verilogast::real_type>)];

      // realtime_declaration
      char dummy163[sizeof(std::shared_ptr<Verilogast::realtime_declaration>)];

      // reference_event
      char dummy164[sizeof(std::shared_ptr<Verilogast::reference_event>)];

      // reg_declaration
      char dummy165[sizeof(std::shared_ptr<Verilogast::reg_declaration>)];

      // remain_active_flag_opt
      // remain_active_flag
      char dummy166[sizeof(std::shared_ptr<Verilogast::remain_active_flag>)];

      // seq_block
      char dummy167[sizeof(std::shared_ptr<Verilogast::seq_block>)];

      // seq_input_list
      char dummy168[sizeof(std::shared_ptr<Verilogast::seq_input_list>)];

      // sequential_body
      char dummy169[sizeof(std::shared_ptr<Verilogast::sequential_body>)];

      // sequential_entry
      char dummy170[sizeof(std::shared_ptr<Verilogast::sequential_entry>)];

      // showcancelled_declaration
      char dummy171[sizeof(std::shared_ptr<Verilogast::showcancelled_declaration>)];

      // simple_path_declaration
      char dummy172[sizeof(std::shared_ptr<Verilogast::simple_path_declaration>)];

      // specify_block
      char dummy173[sizeof(std::shared_ptr<Verilogast::specify_block>)];

      // specify_inout_terminal_descriptor
      char dummy174[sizeof(std::shared_ptr<Verilogast::specify_inout_terminal_descriptor>)];

      // specify_item
      char dummy175[sizeof(std::shared_ptr<Verilogast::specify_item>)];

      // specify_terminal_descriptor
      char dummy176[sizeof(std::shared_ptr<Verilogast::specify_terminal_descriptor>)];

      // specparam_assignment
      // pulse_control_specparam
      char dummy177[sizeof(std::shared_ptr<Verilogast::specparam_assignment>)];

      // specparam_declaration
      char dummy178[sizeof(std::shared_ptr<Verilogast::specparam_declaration>)];

      // stamptime_condition_opt
      // stamptime_condition
      char dummy179[sizeof(std::shared_ptr<Verilogast::stamptime_condition>)];

      // start_edge_offset
      char dummy180[sizeof(std::shared_ptr<Verilogast::start_edge_offset>)];

      // state_dependent_path_declaration
      char dummy181[sizeof(std::shared_ptr<Verilogast::state_dependent_path_declaration>)];

      // statement
      // statement_or_null
      // function_statement
      // else_statement_or_null_opt
      char dummy182[sizeof(std::shared_ptr<Verilogast::statement>)];

      // statement_or_block_item
      char dummy183[sizeof(std::shared_ptr<Verilogast::statement_or_block_item>)];

      // string_typedef
      char dummy184[sizeof(std::shared_ptr<Verilogast::string_typedef>)];

      // system_function_call
      char dummy185[sizeof(std::shared_ptr<Verilogast::system_function_call>)];

      // system_function_identifier
      char dummy186[sizeof(std::shared_ptr<Verilogast::system_function_identifier>)];

      // system_task_enable
      char dummy187[sizeof(std::shared_ptr<Verilogast::system_task_enable>)];

      // system_timing_check
      char dummy188[sizeof(std::shared_ptr<Verilogast::system_timing_check>)];

      // task_declaration
      char dummy189[sizeof(std::shared_ptr<Verilogast::task_declaration>)];

      // task_enable
      char dummy190[sizeof(std::shared_ptr<Verilogast::task_enable>)];

      // task_item_declaration
      char dummy191[sizeof(std::shared_ptr<Verilogast::task_item_declaration>)];

      // task_port_item
      char dummy192[sizeof(std::shared_ptr<Verilogast::task_port_item>)];

      // tf_inout_declaration
      char dummy193[sizeof(std::shared_ptr<Verilogast::tf_inout_declaration>)];

      // tf_input_declaration
      char dummy194[sizeof(std::shared_ptr<Verilogast::tf_input_declaration>)];

      // tf_io_declaration_gen
      char dummy195[sizeof(std::shared_ptr<Verilogast::tf_io_declaration_gen>)];

      // tf_output_declaration
      char dummy196[sizeof(std::shared_ptr<Verilogast::tf_output_declaration>)];

      // threshold_opt
      // threshold
      char dummy197[sizeof(std::shared_ptr<Verilogast::threshold>)];

      // time_declaration
      char dummy198[sizeof(std::shared_ptr<Verilogast::time_declaration>)];

      // timing_check_event
      char dummy199[sizeof(std::shared_ptr<Verilogast::timing_check_event>)];

      // timing_check_event_control_opt
      // timing_check_event_control
      char dummy200[sizeof(std::shared_ptr<Verilogast::timing_check_event_control>)];

      // timing_check_limit
      char dummy201[sizeof(std::shared_ptr<Verilogast::timing_check_limit>)];

      // udp_body
      char dummy202[sizeof(std::shared_ptr<Verilogast::udp_body>)];

      // udp_declaration
      char dummy203[sizeof(std::shared_ptr<Verilogast::udp_declaration>)];

      // udp_declaration_port_list
      char dummy204[sizeof(std::shared_ptr<Verilogast::udp_declaration_port_list>)];

      // udp_initial_statement_opt
      // udp_initial_statement
      char dummy205[sizeof(std::shared_ptr<Verilogast::udp_initial_statement>)];

      // udp_input_declaration
      char dummy206[sizeof(std::shared_ptr<Verilogast::udp_input_declaration>)];

      // udp_input_declaration_sigular
      char dummy207[sizeof(std::shared_ptr<Verilogast::udp_input_declaration_sigular>)];

      // udp_output_declaration
      char dummy208[sizeof(std::shared_ptr<Verilogast::udp_output_declaration>)];

      // udp_port_declaration
      char dummy209[sizeof(std::shared_ptr<Verilogast::udp_port_declaration>)];

      // udp_port_list
      char dummy210[sizeof(std::shared_ptr<Verilogast::udp_port_list>)];

      // udp_reg_declaration
      char dummy211[sizeof(std::shared_ptr<Verilogast::udp_reg_declaration>)];

      // variable_type
      char dummy212[sizeof(std::shared_ptr<Verilogast::variable_type>)];

      // wait_statement
      char dummy213[sizeof(std::shared_ptr<Verilogast::wait_statement>)];

      // level_symbol_list
      char dummy214[sizeof(std::shared_ptr<std::list<Verilogast::level_symbol>>)];

      // comma_attr_spec_list
      char dummy215[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::attr_spec>>>)];

      // attribute_instance_list
      char dummy216[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::attribute_instance>>>)];

      // function_port_list
      // comma_attribute_instance_list_tf_input_declaration_list
      char dummy217[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::attribute_instance_list_tf_input_declaration>>>)];

      // list_of_block_real_identifiers
      // comma_block_real_type_list
      char dummy218[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::block_real_type>>>)];

      // list_of_block_variable_identifiers
      // comma_block_variable_type_list
      char dummy219[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::block_variable_type>>>)];

      // case_generate_item_list
      char dummy220[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::case_generate_item>>>)];

      // case_item_list
      char dummy221[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::case_item>>>)];

      // comma_cmos_switch_instance_list
      char dummy222[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::cmos_switch_instance>>>)];

      // parameter_override
      // list_of_defparam_assignments
      // comma_defparam_assignment_list
      char dummy223[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::defparam_assignment>>>)];

      // source_text
      // description_list
      char dummy224[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::description>>>)];

      // dimension_list
      char dummy225[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::dimension>>>)];

      // comma_edge_descriptor_list
      char dummy226[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::edge_descriptor>>>)];

      // comma_enable_gate_instance_list
      char dummy227[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::enable_gate_instance>>>)];

      // event_expression_orcomma_list
      char dummy228[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::event_expression>>>)];

      // list_of_event_identifiers
      // comma_event_identifier_dimension_list_list
      char dummy229[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::event_identifier_dimension_list>>>)];

      // comma_output_terminal_list
      // comma_input_terminal_list
      // comma_expression_list
      // lp_expression_opt_comma_expression_list_rp_opt
      // lp_expression_opt_comma_expression_list_rp
      // comma_expression_opt_list
      // lp_expression_comma_expression_list_rp_op
      char dummy230[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::expression>>>)];

      // function_item_declaration_list
      char dummy231[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::function_item_declaration>>>)];

      // list_of_port_identifiers
      // comma_port_identifier_list
      // list_of_genvar_identifiers
      // comma_genvar_identifier_list
      // comma_input_port_identifier_list
      char dummy232[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::identifier>>>)];

      // identifier_lsq_expression_rsq_opt_list
      char dummy233[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::identifier_lsq_expression_rsq>>>)];

      // comma_ordered_parameter_assignment_list
      char dummy234[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::mintypmax_expression>>>)];

      // comma_module_instance_list
      char dummy235[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::module_instance>>>)];

      // module_item_list
      // module_or_generate_item_list
      char dummy236[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::module_item>>>)];

      // comma_mos_switch_instance_list
      char dummy237[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::mos_switch_instance>>>)];

      // comma_n_input_gate_instance_list
      char dummy238[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::n_input_gate_instance>>>)];

      // comma_n_output_gate_instance_list
      char dummy239[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::n_output_gate_instance>>>)];

      // comma_named_parameter_assignment_list
      char dummy240[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::named_parameter_assignment>>>)];

      // comma_named_port_connection_list
      char dummy241[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::named_port_connection>>>)];

      // list_of_net_assignments
      // comma_net_assignment_list
      char dummy242[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::net_assignment>>>)];

      // list_of_net_decl_assignments
      // comma_net_decl_assignment_list
      char dummy243[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::net_decl_assignment>>>)];

      // list_of_net_identifiers
      // comma_net_identifier_dimension_list_list
      char dummy244[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::net_identifier_dimension_list>>>)];

      // comma_net_lvalue_list
      char dummy245[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::net_lvalue>>>)];

      // comma_ordered_port_connection_list
      char dummy246[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::ordered_port_connection>>>)];

      // list_of_param_assignments
      // comma_param_assignment_list
      char dummy247[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::param_assignment>>>)];

      // module_parameter_port_list_opt
      // module_parameter_port_list
      // comma_parameter_declaration_list
      char dummy248[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::parameter_declaration>>>)];

      // comma_pass_enable_switch_instance_list
      char dummy249[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::pass_enable_switch_instance>>>)];

      // comma_pass_switch_instance_list
      char dummy250[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::pass_switch_instance>>>)];

      // list_of_ports
      // comma_port_list
      char dummy251[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::port>>>)];

      // list_of_port_declarations
      // comma_port_declaration_list
      char dummy252[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::port_declaration>>>)];

      // list_of_variable_port_identifiers
      // comma_port_identifier_equ1_expression_opt_list
      char dummy253[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::port_identifier_equ1_expression_opt>>>)];

      // comma_port_reference_list
      char dummy254[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::port_reference>>>)];

      // comma_pull_gate_instance_list
      char dummy255[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::pull_gate_instance>>>)];

      // lsquare_range_expression_rsquare_list
      char dummy256[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::range_expression>>>)];

      // list_of_real_identifiers
      // comma_real_type_list
      char dummy257[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::real_type>>>)];

      // sequential_entry_list
      char dummy258[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::sequential_entry>>>)];

      // list_of_path_inouts
      // comma_specify_inout_terminal_descriptor_list
      char dummy259[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::specify_inout_terminal_descriptor>>>)];

      // specify_item_list
      char dummy260[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::specify_item>>>)];

      // list_of_specparam_assignments
      // comma_specparam_assignment_list
      char dummy261[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::specparam_assignment>>>)];

      // statement_or_block_item_list
      char dummy262[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::statement_or_block_item>>>)];

      // task_item_declaration_list
      char dummy263[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::task_item_declaration>>>)];

      // task_port_list
      // comma_task_port_item_list
      char dummy264[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::task_port_item>>>)];

      // comma_udp_input_declaration_list
      char dummy265[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::udp_input_declaration_sigular>>>)];

      // udp_port_declaration_list
      char dummy266[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::udp_port_declaration>>>)];

      // list_of_variable_identifiers
      // comma_variable_type_list
      char dummy267[sizeof(std::shared_ptr<std::list<std::shared_ptr<Verilogast::variable_type>>>)];

      // REAL_NUMBER
      // STRING
      // ESCAPED_IDENTIFIER
      // SIMPLE_IDENTIFIER
      // SYSTEM_TASK_FUNCTION_IDENTIFIER
      char dummy268[sizeof(std::string)];

      // UNSIGNED_NUMBER_size
      // OCTAL_NUMBER
      // BINARY_NUMBER
      // HEX_NUMBER
      char dummy269[sizeof(std::tuple<unsigned int,std::string,std::string>)];

      // UNSIGNED_NUMBER
      char dummy270[sizeof(unsigned int)];
};

    /// Symbol semantic values.
    typedef variant<sizeof(union_type)> semantic_type;
#else
    typedef YYSTYPE semantic_type;
#endif
    /// Symbol locations.
    typedef location location_type;

    /// Syntax errors thrown from user actions.
    struct syntax_error : std::runtime_error
    {
      syntax_error (const location_type& l, const std::string& m);
      location_type location;
    };

    /// Tokens.
    struct token
    {
      enum yytokentype
      {
        TOK_END = 0,
        TOK_KEY_ALWAYS = 258,
        TOK_KEY_AND = 259,
        TOK_KEY_ASSIGN = 260,
        TOK_KEY_AUTOMATIC = 261,
        TOK_KEY_BEGIN = 262,
        TOK_KEY_BUF = 263,
        TOK_KEY_BUFIF0 = 264,
        TOK_KEY_BUFIF1 = 265,
        TOK_KEY_CASE = 266,
        TOK_KEY_CASEX = 267,
        TOK_KEY_CASEZ = 268,
        TOK_KEY_CELL = 269,
        TOK_KEY_CMOS = 270,
        TOK_KEY_CONFIG = 271,
        TOK_KEY_DEASSIGN = 272,
        TOK_KEY_DEFAULT = 273,
        TOK_KEY_DEFPARAM = 274,
        TOK_KEY_DESIGN = 275,
        TOK_KEY_DISABLE = 276,
        TOK_KEY_EDGE = 277,
        TOK_KEY_ELSE = 278,
        TOK_KEY_END = 279,
        TOK_KEY_ENDCASE = 280,
        TOK_KEY_ENDCONFIG = 281,
        TOK_KEY_ENDFUNCTION = 282,
        TOK_KEY_ENDGENERATE = 283,
        TOK_KEY_ENDMODULE = 284,
        TOK_KEY_ENDPRIMITIVE = 285,
        TOK_KEY_ENDSPECIFY = 286,
        TOK_KEY_ENDTABLE = 287,
        TOK_KEY_ENDTASK = 288,
        TOK_KEY_EVENT = 289,
        TOK_KEY_FOR = 290,
        TOK_KEY_FORCE = 291,
        TOK_KEY_FOREVER = 292,
        TOK_KEY_FORK = 293,
        TOK_KEY_FUNCTION = 294,
        TOK_KEY_GENERATE = 295,
        TOK_KEY_GENVAR = 296,
        TOK_KEY_HIGHZ0 = 297,
        TOK_KEY_HIGHZ1 = 298,
        TOK_KEY_IF = 299,
        TOK_KEY_IFNONE = 300,
        TOK_KEY_INCDIR = 301,
        TOK_KEY_INCLUDE = 302,
        TOK_KEY_INITIAL = 303,
        TOK_KEY_INOUT = 304,
        TOK_KEY_INPUT = 305,
        TOK_KEY_INSTANCE = 306,
        TOK_KEY_INTEGER = 307,
        TOK_KEY_JOIN = 308,
        TOK_KEY_LARGE = 309,
        TOK_KEY_LIBLIST = 310,
        TOK_KEY_LIBRARY = 311,
        TOK_KEY_LOCALPARAM = 312,
        TOK_KEY_MACROMODULE = 313,
        TOK_KEY_MEDIUM = 314,
        TOK_KEY_MODULE = 315,
        TOK_KEY_NAND = 316,
        TOK_KEY_NEGEDGE = 317,
        TOK_KEY_NMOS = 318,
        TOK_KEY_NOR = 319,
        TOK_KEY_NOSHOWCANCELLED = 320,
        TOK_KEY_NOT = 321,
        TOK_KEY_NOTIF0 = 322,
        TOK_KEY_NOTIF1 = 323,
        TOK_KEY_OR = 324,
        TOK_KEY_OUTPUT = 325,
        TOK_KEY_PARAMETER = 326,
        TOK_KEY_PMOS = 327,
        TOK_KEY_POSEDGE = 328,
        TOK_KEY_PRIMITIVE = 329,
        TOK_KEY_PULL0 = 330,
        TOK_KEY_PULL1 = 331,
        TOK_KEY_PULLDOWN = 332,
        TOK_KEY_PULLUP = 333,
        TOK_KEY_PULSESTYLE_ONEVENT = 334,
        TOK_KEY_PULSESTYLE_ONDETECT = 335,
        TOK_KEY_RCMOS = 336,
        TOK_KEY_REAL = 337,
        TOK_KEY_REALTIME = 338,
        TOK_KEY_REG = 339,
        TOK_KEY_RELEASE = 340,
        TOK_KEY_REPEAT = 341,
        TOK_KEY_RNMOS = 342,
        TOK_KEY_RPMOS = 343,
        TOK_KEY_RTRAN = 344,
        TOK_KEY_RTRANIF0 = 345,
        TOK_KEY_RTRANIF1 = 346,
        TOK_KEY_SCALARED = 347,
        TOK_KEY_SHOWCANCELLED = 348,
        TOK_KEY_SIGNED = 349,
        TOK_KEY_SMALL = 350,
        TOK_KEY_SPECIFY = 351,
        TOK_KEY_SPECPARAM = 352,
        TOK_KEY_STRONG0 = 353,
        TOK_KEY_STRONG1 = 354,
        TOK_KEY_SUPPLY0 = 355,
        TOK_KEY_SUPPLY1 = 356,
        TOK_KEY_TABLE = 357,
        TOK_KEY_TASK = 358,
        TOK_KEY_TIME = 359,
        TOK_KEY_TRAN = 360,
        TOK_KEY_TRANIF0 = 361,
        TOK_KEY_TRANIF1 = 362,
        TOK_KEY_TRI = 363,
        TOK_KEY_TRI0 = 364,
        TOK_KEY_TRI1 = 365,
        TOK_KEY_TRIAND = 366,
        TOK_KEY_TRIOR = 367,
        TOK_KEY_TRIREG = 368,
        TOK_KEY_UNSIGNED = 369,
        TOK_KEY_USE = 370,
        TOK_KEY_UWIRE = 371,
        TOK_KEY_VECTORED = 372,
        TOK_KEY_WAIT = 373,
        TOK_KEY_WAND = 374,
        TOK_KEY_WEAK0 = 375,
        TOK_KEY_WEAK1 = 376,
        TOK_KEY_WHILE = 377,
        TOK_KEY_WIRE = 378,
        TOK_KEY_WOR = 379,
        TOK_KEY_XNOR = 380,
        TOK_KEY_XOR = 381,
        TOK_KEY_PATHPULSE = 382,
        TOK_DOLLOR_setup = 383,
        TOK_DOLLOR_hold = 384,
        TOK_DOLLOR_setuphold = 385,
        TOK_DOLLOR_recovery = 386,
        TOK_DOLLOR_removal = 387,
        TOK_DOLLOR_recrem = 388,
        TOK_DOLLOR_skew = 389,
        TOK_DOLLOR_timeskew = 390,
        TOK_DOLLOR_fullskew = 391,
        TOK_DOLLOR_period = 392,
        TOK_DOLLOR_width = 393,
        TOK_DOLLOR_nochange = 394,
        TOK_AND3 = 395,
        TOK_EDGE_01 = 396,
        TOK_EDGE_10 = 397,
        TOK_EDGE_0 = 398,
        TOK_EDGE_1 = 399,
        TOK_EDGE_x = 400,
        TOK_EDGE_X = 401,
        TOK_EDGE_z = 402,
        TOK_EDGE_Z = 403,
        TOK_TABLESC_LEVEL_SYMBOL_0 = 404,
        TOK_TABLESC_LEVEL_SYMBOL_1 = 405,
        TOK_TABLESC_LEVEL_SYMBOL_x = 406,
        TOK_TABLESC_LEVEL_SYMBOL_X = 407,
        TOK_TABLESC_LEVEL_SYMBOL_QUESTION = 408,
        TOK_TABLESC_LEVEL_SYMBOL_b = 409,
        TOK_TABLESC_LEVEL_SYMBOL_B = 410,
        TOK_TABLESC_LEVEL_SYMBOL_SUB = 411,
        TOK_TABLESC_EDGE_SYMBOL_r = 412,
        TOK_TABLESC_EDGE_SYMBOL_R = 413,
        TOK_TABLESC_EDGE_SYMBOL_f = 414,
        TOK_TABLESC_EDGE_SYMBOL_F = 415,
        TOK_TABLESC_EDGE_SYMBOL_p = 416,
        TOK_TABLESC_EDGE_SYMBOL_P = 417,
        TOK_TABLESC_EDGE_SYMBOL_n = 418,
        TOK_TABLESC_EDGE_SYMBOL_N = 419,
        TOK_TABLESC_EDGE_SYMBOL_MUL = 420,
        TOK_OP2_ADD = 421,
        TOK_OP2_SUB = 422,
        TOK_OP2_AND = 423,
        TOK_OP2_OR = 424,
        TOK_OP2_XOR = 425,
        TOK_OP2_XNOR = 426,
        TOK_OP1_LOGIC_NEG = 427,
        TOK_OP1_BITWISE_NEG = 428,
        TOK_OP1_REDUCE_NAND = 429,
        TOK_OP1_REDUCE_NOR = 430,
        TOK_OP2_MULTIPLE = 431,
        TOK_OP2_DIV = 432,
        TOK_OP2_MOD = 433,
        TOK_OP2_EQU2 = 434,
        TOK_OP2_NEQ2 = 435,
        TOK_OP2_EQU3 = 436,
        TOK_OP2_NEQ3 = 437,
        TOK_OP2_AND2 = 438,
        TOK_OP2_OR2 = 439,
        TOK_OP2_POWER = 440,
        TOK_OP2_LT = 441,
        TOK_OP2_LE = 442,
        TOK_OP2_GT = 443,
        TOK_OP2_GE = 444,
        TOK_OP2_LOGICAL_RIGHTSHIFT = 445,
        TOK_OP2_LOGICAL_LEFTSHIFT = 446,
        TOK_OP2_ARITHMETIC_RIGHTSHIFT = 447,
        TOK_OP2_ARITHMETIC_LEFTSHIFT = 448,
        TOK_OP2_QUESTION = 449,
        TOK_LPARENT = 450,
        TOK_LPARENT_STRENGTH = 451,
        TOK_LPARENTSTART = 452,
        TOK_RPARENT = 453,
        TOK_RPARENTSTART = 454,
        TOK_COMMA = 455,
        TOK_COMMA_port_dec = 456,
        TOK_SEMICOLON = 457,
        TOK_COLON = 458,
        TOK_LSQUARE = 459,
        TOK_RSQUARE = 460,
        TOK_EQU1 = 461,
        TOK_LBRACE = 462,
        TOK_RBRACE = 463,
        TOK_PERIOD = 464,
        TOK_AT = 465,
        TOK_JING = 466,
        TOK_ADDRANGE = 467,
        TOK_SUBRANGE = 468,
        TOK_DOLLOR = 469,
        TOK_IMPLY = 470,
        TOK_IMPLY2 = 471,
        TOK_IMPLYSTART = 472,
        TOK_UNSIGNED_NUMBER = 473,
        TOK_UNSIGNED_NUMBER_size = 474,
        TOK_OCTAL_NUMBER = 475,
        TOK_BINARY_NUMBER = 476,
        TOK_HEX_NUMBER = 477,
        TOK_REAL_NUMBER = 478,
        TOK_STRING = 479,
        TOK_ESCAPED_IDENTIFIER = 480,
        TOK_SIMPLE_IDENTIFIER = 481,
        TOK_SYSTEM_TASK_FUNCTION_IDENTIFIER = 482,
        TOK_OP1_ADD = 483,
        TOK_OP1_SUB = 484,
        TOK_OP1_AND = 485,
        TOK_OP1_OR = 486,
        TOK_OP1_XOR = 487,
        TOK_OP1_XNOR = 488
      };
    };

    /// (External) token type, as returned by yylex.
    typedef token::yytokentype token_type;

    /// Internal symbol number.
    typedef int symbol_number_type;

    /// Internal symbol number for tokens (subsumed by symbol_number_type).
    typedef unsigned char token_number_type;

    /// A complete symbol.
    ///
    /// Expects its Base type to provide access to the symbol type
    /// via type_get().
    ///
    /// Provide access to semantic value and location.
    template <typename Base>
    struct basic_symbol : Base
    {
      /// Alias to Base.
      typedef Base super_type;

      /// Default constructor.
      basic_symbol ();

      /// Copy constructor.
      basic_symbol (const basic_symbol& other);

      /// Constructor for valueless symbols, and symbols from each type.

  basic_symbol (typename Base::kind_type t, const location_type& l);

  basic_symbol (typename Base::kind_type t, const Verilogast::automatic v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const Verilogast::charge_strength v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const Verilogast::cmos_switchtype v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const Verilogast::edge_identifier v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const Verilogast::edge_symbol v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const Verilogast::enable_gatetype v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const Verilogast::io_type v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const Verilogast::level_symbol v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const Verilogast::mos_switchtype v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const Verilogast::n_input_gatetype v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const Verilogast::n_output_gatetype v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const Verilogast::net_type v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const Verilogast::output_variable_type v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const Verilogast::parameter_type v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const Verilogast::pass_en_switchtype v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const Verilogast::pass_switchtype v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const Verilogast::polarity_operator v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const Verilogast::reg v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const Verilogast::signedType v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const Verilogast::strength v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const Verilogast::task_port_type v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const Verilogast::vectored_scalared v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const Verilogast::z_or_x v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const Verilogast::zero_or_one v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const int v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::always_construct> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::attr_spec> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::attribute_instance> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::attribute_instance_list_tf_input_declaration> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::block_item_declaration> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::block_real_type> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::block_variable_type> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::blocking_assignment> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::case_generate_construct> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::case_generate_item> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::case_item> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::case_statement> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::checktime_condition> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::cmos_switch_instance> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::colon_block_identifier> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::colon_opt> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::concatenation> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::conditional_expression> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::conditional_generate_construct> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::conditional_statement> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::continuous_assign> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::controlled_reference_event> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::controlled_timing_check_event> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::data_event> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::defparam_assignment> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::delay2> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::delay3> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::delay_control> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::delay_or_event_control> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::delay_value> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::delayed_data> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::delayed_reference> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::description> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::dimension> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::disable_statement> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::dollor_fullskew_timing_check> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::dollor_hold_timing_check> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::dollor_nochange_timing_check> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::dollor_period_timing_check> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::dollor_recovery_timing_check> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::dollor_recrem_timing_check> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::dollor_removal_timing_check> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::dollor_setup_timing_check> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::dollor_setuphold_timing_check> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::dollor_skew_timing_check> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::dollor_timeskew_timing_check> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::dollor_width_timing_check> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::drive_strength> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::edge_control_specifier> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::edge_descriptor> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::edge_indicator> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::edge_input_list> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::edge_sensitive_path_declaration> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::enable_gate_instance> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::end_edge_offset> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::event_based_flag> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::event_control> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::event_declaration> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::event_expression> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::event_identifier_dimension_list> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::event_trigger> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::expression> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::full_edge_sensitive_path_description> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::full_path_description> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::function_call> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::function_declaration> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::function_item_declaration> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::function_range_or_type> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::gate_instantiation> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::generate_block> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::generate_region> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::genvar_declaration> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::genvar_initialization> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::genvar_iteration> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::hierarchical_identifier> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::identifier> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::identifier_lsq_expression_rsq> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::if_generate_construct> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::init_val> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::initial_construct> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::inout_declaration> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::input_declaration> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::integer_declaration> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::list_of_path_delay_expressions> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::list_of_port_connections> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::local_parameter_declaration> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::loop_generate_construct> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::loop_statement> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::mintypmax_expression> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::module_declaration> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::module_instance> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::module_instantiation> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::module_item> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::mos_switch_instance> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::multiple_concatenation> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::n_input_gate_instance> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::n_output_gate_instance> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::name_of_gate_instance> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::name_of_module_instance> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::named_parameter_assignment> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::named_port_connection> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::net_assignment> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::net_decl_assignment> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::net_declaration> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::net_identifier_dimension_list> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::net_lvalue> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::nonblocking_assignment> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::notifier> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::number> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::ordered_port_connection> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::output_declaration> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::par_block> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::parallel_edge_sensitive_path_description> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::parallel_path_description> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::param_assignment> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::parameter_declaration> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::parameter_value_assignment> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::pass_enable_switch_instance> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::pass_switch_instance> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::path_declaration> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::port> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::port_declaration> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::port_expression> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::port_identifier_equ1_expression_opt> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::port_reference> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::primary> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::procedural_continuous_assignments> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::procedural_timing_control> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::procedural_timing_control_statement> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::pull_gate_instance> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::pulldown_strength> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::pullup_strength> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::pulsestyle_declaration> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::range> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::range_expression> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::real_declaration> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::real_type> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::realtime_declaration> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::reference_event> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::reg_declaration> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::remain_active_flag> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::seq_block> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::seq_input_list> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::sequential_body> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::sequential_entry> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::showcancelled_declaration> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::simple_path_declaration> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::specify_block> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::specify_inout_terminal_descriptor> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::specify_item> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::specify_terminal_descriptor> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::specparam_assignment> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::specparam_declaration> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::stamptime_condition> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::start_edge_offset> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::state_dependent_path_declaration> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::statement> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::statement_or_block_item> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::string_typedef> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::system_function_call> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::system_function_identifier> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::system_task_enable> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::system_timing_check> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::task_declaration> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::task_enable> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::task_item_declaration> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::task_port_item> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::tf_inout_declaration> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::tf_input_declaration> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::tf_io_declaration_gen> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::tf_output_declaration> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::threshold> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::time_declaration> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::timing_check_event> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::timing_check_event_control> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::timing_check_limit> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::udp_body> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::udp_declaration> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::udp_declaration_port_list> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::udp_initial_statement> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::udp_input_declaration> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::udp_input_declaration_sigular> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::udp_output_declaration> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::udp_port_declaration> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::udp_port_list> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::udp_reg_declaration> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::variable_type> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::wait_statement> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<Verilogast::level_symbol>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::attr_spec>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::attribute_instance>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::attribute_instance_list_tf_input_declaration>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::block_real_type>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::block_variable_type>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::case_generate_item>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::case_item>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::cmos_switch_instance>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::defparam_assignment>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::description>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::dimension>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::edge_descriptor>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::enable_gate_instance>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::event_expression>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::event_identifier_dimension_list>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::expression>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::function_item_declaration>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::identifier>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::identifier_lsq_expression_rsq>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::mintypmax_expression>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::module_instance>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::module_item>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::mos_switch_instance>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::n_input_gate_instance>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::n_output_gate_instance>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::named_parameter_assignment>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::named_port_connection>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::net_assignment>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::net_decl_assignment>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::net_identifier_dimension_list>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::net_lvalue>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::ordered_port_connection>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::param_assignment>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::parameter_declaration>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::pass_enable_switch_instance>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::pass_switch_instance>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::port>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::port_declaration>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::port_identifier_equ1_expression_opt>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::port_reference>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::pull_gate_instance>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::range_expression>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::real_type>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::sequential_entry>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::specify_inout_terminal_descriptor>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::specify_item>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::specparam_assignment>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::statement_or_block_item>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::task_item_declaration>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::task_port_item>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::udp_input_declaration_sigular>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::udp_port_declaration>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::variable_type>>> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::string v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const std::tuple<unsigned int, std::string, std::string> v, const location_type& l);

  basic_symbol (typename Base::kind_type t, const unsigned int v, const location_type& l);


      /// Constructor for symbols with semantic value.
      basic_symbol (typename Base::kind_type t,
                    const semantic_type& v,
                    const location_type& l);

      ~basic_symbol ();

      /// Destructive move, \a s is emptied into this.
      void move (basic_symbol& s);

      /// The semantic value.
      semantic_type value;

      /// The location.
      location_type location;

    private:
      /// Assignment operator.
      basic_symbol& operator= (const basic_symbol& other);
    };

    /// Type access provider for token (enum) based symbols.
    struct by_type
    {
      /// Default constructor.
      by_type ();

      /// Copy constructor.
      by_type (const by_type& other);

      /// The symbol type as needed by the constructor.
      typedef token_type kind_type;

      /// Constructor from (external) token numbers.
      by_type (kind_type t);

      /// Steal the symbol type from \a that.
      void move (by_type& that);

      /// The (internal) type number (corresponding to \a type).
      /// -1 when this symbol is empty.
      symbol_number_type type_get () const;

      /// The token.
      token_type token () const;

      enum { empty = 0 };

      /// The symbol type.
      /// -1 when this symbol is empty.
      token_number_type type;
    };

    /// "External" symbols: returned by the scanner.
    typedef basic_symbol<by_type> symbol_type;

    // Symbol constructors declarations.
    static inline
    symbol_type
    make_END (const location_type& l);

    static inline
    symbol_type
    make_KEY_ALWAYS (const location_type& l);

    static inline
    symbol_type
    make_KEY_AND (const location_type& l);

    static inline
    symbol_type
    make_KEY_ASSIGN (const location_type& l);

    static inline
    symbol_type
    make_KEY_AUTOMATIC (const location_type& l);

    static inline
    symbol_type
    make_KEY_BEGIN (const location_type& l);

    static inline
    symbol_type
    make_KEY_BUF (const location_type& l);

    static inline
    symbol_type
    make_KEY_BUFIF0 (const location_type& l);

    static inline
    symbol_type
    make_KEY_BUFIF1 (const location_type& l);

    static inline
    symbol_type
    make_KEY_CASE (const location_type& l);

    static inline
    symbol_type
    make_KEY_CASEX (const location_type& l);

    static inline
    symbol_type
    make_KEY_CASEZ (const location_type& l);

    static inline
    symbol_type
    make_KEY_CELL (const location_type& l);

    static inline
    symbol_type
    make_KEY_CMOS (const location_type& l);

    static inline
    symbol_type
    make_KEY_CONFIG (const location_type& l);

    static inline
    symbol_type
    make_KEY_DEASSIGN (const location_type& l);

    static inline
    symbol_type
    make_KEY_DEFAULT (const location_type& l);

    static inline
    symbol_type
    make_KEY_DEFPARAM (const location_type& l);

    static inline
    symbol_type
    make_KEY_DESIGN (const location_type& l);

    static inline
    symbol_type
    make_KEY_DISABLE (const location_type& l);

    static inline
    symbol_type
    make_KEY_EDGE (const location_type& l);

    static inline
    symbol_type
    make_KEY_ELSE (const location_type& l);

    static inline
    symbol_type
    make_KEY_END (const location_type& l);

    static inline
    symbol_type
    make_KEY_ENDCASE (const location_type& l);

    static inline
    symbol_type
    make_KEY_ENDCONFIG (const location_type& l);

    static inline
    symbol_type
    make_KEY_ENDFUNCTION (const location_type& l);

    static inline
    symbol_type
    make_KEY_ENDGENERATE (const location_type& l);

    static inline
    symbol_type
    make_KEY_ENDMODULE (const location_type& l);

    static inline
    symbol_type
    make_KEY_ENDPRIMITIVE (const location_type& l);

    static inline
    symbol_type
    make_KEY_ENDSPECIFY (const location_type& l);

    static inline
    symbol_type
    make_KEY_ENDTABLE (const location_type& l);

    static inline
    symbol_type
    make_KEY_ENDTASK (const location_type& l);

    static inline
    symbol_type
    make_KEY_EVENT (const location_type& l);

    static inline
    symbol_type
    make_KEY_FOR (const location_type& l);

    static inline
    symbol_type
    make_KEY_FORCE (const location_type& l);

    static inline
    symbol_type
    make_KEY_FOREVER (const location_type& l);

    static inline
    symbol_type
    make_KEY_FORK (const location_type& l);

    static inline
    symbol_type
    make_KEY_FUNCTION (const location_type& l);

    static inline
    symbol_type
    make_KEY_GENERATE (const location_type& l);

    static inline
    symbol_type
    make_KEY_GENVAR (const location_type& l);

    static inline
    symbol_type
    make_KEY_HIGHZ0 (const location_type& l);

    static inline
    symbol_type
    make_KEY_HIGHZ1 (const location_type& l);

    static inline
    symbol_type
    make_KEY_IF (const location_type& l);

    static inline
    symbol_type
    make_KEY_IFNONE (const location_type& l);

    static inline
    symbol_type
    make_KEY_INCDIR (const location_type& l);

    static inline
    symbol_type
    make_KEY_INCLUDE (const location_type& l);

    static inline
    symbol_type
    make_KEY_INITIAL (const location_type& l);

    static inline
    symbol_type
    make_KEY_INOUT (const location_type& l);

    static inline
    symbol_type
    make_KEY_INPUT (const location_type& l);

    static inline
    symbol_type
    make_KEY_INSTANCE (const location_type& l);

    static inline
    symbol_type
    make_KEY_INTEGER (const location_type& l);

    static inline
    symbol_type
    make_KEY_JOIN (const location_type& l);

    static inline
    symbol_type
    make_KEY_LARGE (const location_type& l);

    static inline
    symbol_type
    make_KEY_LIBLIST (const location_type& l);

    static inline
    symbol_type
    make_KEY_LIBRARY (const location_type& l);

    static inline
    symbol_type
    make_KEY_LOCALPARAM (const location_type& l);

    static inline
    symbol_type
    make_KEY_MACROMODULE (const location_type& l);

    static inline
    symbol_type
    make_KEY_MEDIUM (const location_type& l);

    static inline
    symbol_type
    make_KEY_MODULE (const location_type& l);

    static inline
    symbol_type
    make_KEY_NAND (const location_type& l);

    static inline
    symbol_type
    make_KEY_NEGEDGE (const location_type& l);

    static inline
    symbol_type
    make_KEY_NMOS (const location_type& l);

    static inline
    symbol_type
    make_KEY_NOR (const location_type& l);

    static inline
    symbol_type
    make_KEY_NOSHOWCANCELLED (const location_type& l);

    static inline
    symbol_type
    make_KEY_NOT (const location_type& l);

    static inline
    symbol_type
    make_KEY_NOTIF0 (const location_type& l);

    static inline
    symbol_type
    make_KEY_NOTIF1 (const location_type& l);

    static inline
    symbol_type
    make_KEY_OR (const location_type& l);

    static inline
    symbol_type
    make_KEY_OUTPUT (const location_type& l);

    static inline
    symbol_type
    make_KEY_PARAMETER (const location_type& l);

    static inline
    symbol_type
    make_KEY_PMOS (const location_type& l);

    static inline
    symbol_type
    make_KEY_POSEDGE (const location_type& l);

    static inline
    symbol_type
    make_KEY_PRIMITIVE (const location_type& l);

    static inline
    symbol_type
    make_KEY_PULL0 (const location_type& l);

    static inline
    symbol_type
    make_KEY_PULL1 (const location_type& l);

    static inline
    symbol_type
    make_KEY_PULLDOWN (const location_type& l);

    static inline
    symbol_type
    make_KEY_PULLUP (const location_type& l);

    static inline
    symbol_type
    make_KEY_PULSESTYLE_ONEVENT (const location_type& l);

    static inline
    symbol_type
    make_KEY_PULSESTYLE_ONDETECT (const location_type& l);

    static inline
    symbol_type
    make_KEY_RCMOS (const location_type& l);

    static inline
    symbol_type
    make_KEY_REAL (const location_type& l);

    static inline
    symbol_type
    make_KEY_REALTIME (const location_type& l);

    static inline
    symbol_type
    make_KEY_REG (const location_type& l);

    static inline
    symbol_type
    make_KEY_RELEASE (const location_type& l);

    static inline
    symbol_type
    make_KEY_REPEAT (const location_type& l);

    static inline
    symbol_type
    make_KEY_RNMOS (const location_type& l);

    static inline
    symbol_type
    make_KEY_RPMOS (const location_type& l);

    static inline
    symbol_type
    make_KEY_RTRAN (const location_type& l);

    static inline
    symbol_type
    make_KEY_RTRANIF0 (const location_type& l);

    static inline
    symbol_type
    make_KEY_RTRANIF1 (const location_type& l);

    static inline
    symbol_type
    make_KEY_SCALARED (const location_type& l);

    static inline
    symbol_type
    make_KEY_SHOWCANCELLED (const location_type& l);

    static inline
    symbol_type
    make_KEY_SIGNED (const location_type& l);

    static inline
    symbol_type
    make_KEY_SMALL (const location_type& l);

    static inline
    symbol_type
    make_KEY_SPECIFY (const location_type& l);

    static inline
    symbol_type
    make_KEY_SPECPARAM (const location_type& l);

    static inline
    symbol_type
    make_KEY_STRONG0 (const location_type& l);

    static inline
    symbol_type
    make_KEY_STRONG1 (const location_type& l);

    static inline
    symbol_type
    make_KEY_SUPPLY0 (const location_type& l);

    static inline
    symbol_type
    make_KEY_SUPPLY1 (const location_type& l);

    static inline
    symbol_type
    make_KEY_TABLE (const location_type& l);

    static inline
    symbol_type
    make_KEY_TASK (const location_type& l);

    static inline
    symbol_type
    make_KEY_TIME (const location_type& l);

    static inline
    symbol_type
    make_KEY_TRAN (const location_type& l);

    static inline
    symbol_type
    make_KEY_TRANIF0 (const location_type& l);

    static inline
    symbol_type
    make_KEY_TRANIF1 (const location_type& l);

    static inline
    symbol_type
    make_KEY_TRI (const location_type& l);

    static inline
    symbol_type
    make_KEY_TRI0 (const location_type& l);

    static inline
    symbol_type
    make_KEY_TRI1 (const location_type& l);

    static inline
    symbol_type
    make_KEY_TRIAND (const location_type& l);

    static inline
    symbol_type
    make_KEY_TRIOR (const location_type& l);

    static inline
    symbol_type
    make_KEY_TRIREG (const location_type& l);

    static inline
    symbol_type
    make_KEY_UNSIGNED (const location_type& l);

    static inline
    symbol_type
    make_KEY_USE (const location_type& l);

    static inline
    symbol_type
    make_KEY_UWIRE (const location_type& l);

    static inline
    symbol_type
    make_KEY_VECTORED (const location_type& l);

    static inline
    symbol_type
    make_KEY_WAIT (const location_type& l);

    static inline
    symbol_type
    make_KEY_WAND (const location_type& l);

    static inline
    symbol_type
    make_KEY_WEAK0 (const location_type& l);

    static inline
    symbol_type
    make_KEY_WEAK1 (const location_type& l);

    static inline
    symbol_type
    make_KEY_WHILE (const location_type& l);

    static inline
    symbol_type
    make_KEY_WIRE (const location_type& l);

    static inline
    symbol_type
    make_KEY_WOR (const location_type& l);

    static inline
    symbol_type
    make_KEY_XNOR (const location_type& l);

    static inline
    symbol_type
    make_KEY_XOR (const location_type& l);

    static inline
    symbol_type
    make_KEY_PATHPULSE (const location_type& l);

    static inline
    symbol_type
    make_DOLLOR_setup (const location_type& l);

    static inline
    symbol_type
    make_DOLLOR_hold (const location_type& l);

    static inline
    symbol_type
    make_DOLLOR_setuphold (const location_type& l);

    static inline
    symbol_type
    make_DOLLOR_recovery (const location_type& l);

    static inline
    symbol_type
    make_DOLLOR_removal (const location_type& l);

    static inline
    symbol_type
    make_DOLLOR_recrem (const location_type& l);

    static inline
    symbol_type
    make_DOLLOR_skew (const location_type& l);

    static inline
    symbol_type
    make_DOLLOR_timeskew (const location_type& l);

    static inline
    symbol_type
    make_DOLLOR_fullskew (const location_type& l);

    static inline
    symbol_type
    make_DOLLOR_period (const location_type& l);

    static inline
    symbol_type
    make_DOLLOR_width (const location_type& l);

    static inline
    symbol_type
    make_DOLLOR_nochange (const location_type& l);

    static inline
    symbol_type
    make_AND3 (const location_type& l);

    static inline
    symbol_type
    make_EDGE_01 (const location_type& l);

    static inline
    symbol_type
    make_EDGE_10 (const location_type& l);

    static inline
    symbol_type
    make_EDGE_0 (const location_type& l);

    static inline
    symbol_type
    make_EDGE_1 (const location_type& l);

    static inline
    symbol_type
    make_EDGE_x (const location_type& l);

    static inline
    symbol_type
    make_EDGE_X (const location_type& l);

    static inline
    symbol_type
    make_EDGE_z (const location_type& l);

    static inline
    symbol_type
    make_EDGE_Z (const location_type& l);

    static inline
    symbol_type
    make_TABLESC_LEVEL_SYMBOL_0 (const location_type& l);

    static inline
    symbol_type
    make_TABLESC_LEVEL_SYMBOL_1 (const location_type& l);

    static inline
    symbol_type
    make_TABLESC_LEVEL_SYMBOL_x (const location_type& l);

    static inline
    symbol_type
    make_TABLESC_LEVEL_SYMBOL_X (const location_type& l);

    static inline
    symbol_type
    make_TABLESC_LEVEL_SYMBOL_QUESTION (const location_type& l);

    static inline
    symbol_type
    make_TABLESC_LEVEL_SYMBOL_b (const location_type& l);

    static inline
    symbol_type
    make_TABLESC_LEVEL_SYMBOL_B (const location_type& l);

    static inline
    symbol_type
    make_TABLESC_LEVEL_SYMBOL_SUB (const location_type& l);

    static inline
    symbol_type
    make_TABLESC_EDGE_SYMBOL_r (const location_type& l);

    static inline
    symbol_type
    make_TABLESC_EDGE_SYMBOL_R (const location_type& l);

    static inline
    symbol_type
    make_TABLESC_EDGE_SYMBOL_f (const location_type& l);

    static inline
    symbol_type
    make_TABLESC_EDGE_SYMBOL_F (const location_type& l);

    static inline
    symbol_type
    make_TABLESC_EDGE_SYMBOL_p (const location_type& l);

    static inline
    symbol_type
    make_TABLESC_EDGE_SYMBOL_P (const location_type& l);

    static inline
    symbol_type
    make_TABLESC_EDGE_SYMBOL_n (const location_type& l);

    static inline
    symbol_type
    make_TABLESC_EDGE_SYMBOL_N (const location_type& l);

    static inline
    symbol_type
    make_TABLESC_EDGE_SYMBOL_MUL (const location_type& l);

    static inline
    symbol_type
    make_OP2_ADD (const location_type& l);

    static inline
    symbol_type
    make_OP2_SUB (const location_type& l);

    static inline
    symbol_type
    make_OP2_AND (const location_type& l);

    static inline
    symbol_type
    make_OP2_OR (const location_type& l);

    static inline
    symbol_type
    make_OP2_XOR (const location_type& l);

    static inline
    symbol_type
    make_OP2_XNOR (const location_type& l);

    static inline
    symbol_type
    make_OP1_LOGIC_NEG (const location_type& l);

    static inline
    symbol_type
    make_OP1_BITWISE_NEG (const location_type& l);

    static inline
    symbol_type
    make_OP1_REDUCE_NAND (const location_type& l);

    static inline
    symbol_type
    make_OP1_REDUCE_NOR (const location_type& l);

    static inline
    symbol_type
    make_OP2_MULTIPLE (const location_type& l);

    static inline
    symbol_type
    make_OP2_DIV (const location_type& l);

    static inline
    symbol_type
    make_OP2_MOD (const location_type& l);

    static inline
    symbol_type
    make_OP2_EQU2 (const location_type& l);

    static inline
    symbol_type
    make_OP2_NEQ2 (const location_type& l);

    static inline
    symbol_type
    make_OP2_EQU3 (const location_type& l);

    static inline
    symbol_type
    make_OP2_NEQ3 (const location_type& l);

    static inline
    symbol_type
    make_OP2_AND2 (const location_type& l);

    static inline
    symbol_type
    make_OP2_OR2 (const location_type& l);

    static inline
    symbol_type
    make_OP2_POWER (const location_type& l);

    static inline
    symbol_type
    make_OP2_LT (const location_type& l);

    static inline
    symbol_type
    make_OP2_LE (const location_type& l);

    static inline
    symbol_type
    make_OP2_GT (const location_type& l);

    static inline
    symbol_type
    make_OP2_GE (const location_type& l);

    static inline
    symbol_type
    make_OP2_LOGICAL_RIGHTSHIFT (const location_type& l);

    static inline
    symbol_type
    make_OP2_LOGICAL_LEFTSHIFT (const location_type& l);

    static inline
    symbol_type
    make_OP2_ARITHMETIC_RIGHTSHIFT (const location_type& l);

    static inline
    symbol_type
    make_OP2_ARITHMETIC_LEFTSHIFT (const location_type& l);

    static inline
    symbol_type
    make_OP2_QUESTION (const location_type& l);

    static inline
    symbol_type
    make_LPARENT (const location_type& l);

    static inline
    symbol_type
    make_LPARENT_STRENGTH (const location_type& l);

    static inline
    symbol_type
    make_LPARENTSTART (const location_type& l);

    static inline
    symbol_type
    make_RPARENT (const location_type& l);

    static inline
    symbol_type
    make_RPARENTSTART (const location_type& l);

    static inline
    symbol_type
    make_COMMA (const location_type& l);

    static inline
    symbol_type
    make_COMMA_port_dec (const location_type& l);

    static inline
    symbol_type
    make_SEMICOLON (const location_type& l);

    static inline
    symbol_type
    make_COLON (const location_type& l);

    static inline
    symbol_type
    make_LSQUARE (const location_type& l);

    static inline
    symbol_type
    make_RSQUARE (const location_type& l);

    static inline
    symbol_type
    make_EQU1 (const location_type& l);

    static inline
    symbol_type
    make_LBRACE (const location_type& l);

    static inline
    symbol_type
    make_RBRACE (const location_type& l);

    static inline
    symbol_type
    make_PERIOD (const location_type& l);

    static inline
    symbol_type
    make_AT (const location_type& l);

    static inline
    symbol_type
    make_JING (const location_type& l);

    static inline
    symbol_type
    make_ADDRANGE (const location_type& l);

    static inline
    symbol_type
    make_SUBRANGE (const location_type& l);

    static inline
    symbol_type
    make_DOLLOR (const location_type& l);

    static inline
    symbol_type
    make_IMPLY (const location_type& l);

    static inline
    symbol_type
    make_IMPLY2 (const location_type& l);

    static inline
    symbol_type
    make_IMPLYSTART (const location_type& l);

    static inline
    symbol_type
    make_UNSIGNED_NUMBER (const unsigned int& v, const location_type& l);

    static inline
    symbol_type
    make_UNSIGNED_NUMBER_size (const std::tuple<unsigned int,std::string,std::string>& v, const location_type& l);

    static inline
    symbol_type
    make_OCTAL_NUMBER (const std::tuple<unsigned int,std::string,std::string>& v, const location_type& l);

    static inline
    symbol_type
    make_BINARY_NUMBER (const std::tuple<unsigned int,std::string,std::string>& v, const location_type& l);

    static inline
    symbol_type
    make_HEX_NUMBER (const std::tuple<unsigned int,std::string,std::string>& v, const location_type& l);

    static inline
    symbol_type
    make_REAL_NUMBER (const std::string& v, const location_type& l);

    static inline
    symbol_type
    make_STRING (const std::string& v, const location_type& l);

    static inline
    symbol_type
    make_ESCAPED_IDENTIFIER (const std::string& v, const location_type& l);

    static inline
    symbol_type
    make_SIMPLE_IDENTIFIER (const std::string& v, const location_type& l);

    static inline
    symbol_type
    make_SYSTEM_TASK_FUNCTION_IDENTIFIER (const std::string& v, const location_type& l);

    static inline
    symbol_type
    make_OP1_ADD (const location_type& l);

    static inline
    symbol_type
    make_OP1_SUB (const location_type& l);

    static inline
    symbol_type
    make_OP1_AND (const location_type& l);

    static inline
    symbol_type
    make_OP1_OR (const location_type& l);

    static inline
    symbol_type
    make_OP1_XOR (const location_type& l);

    static inline
    symbol_type
    make_OP1_XNOR (const location_type& l);


    /// Build a parser object.
    verilog_parser (std::string * filename_yyarg);
    virtual ~verilog_parser ();

    /// Parse.
    /// \returns  0 iff parsing succeeded.
    virtual int parse ();

#if YYDEBUG
    /// The current debugging stream.
    std::ostream& debug_stream () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging stream.
    void set_debug_stream (std::ostream &);

    /// Type for debugging levels.
    typedef int debug_level_type;
    /// The current debugging level.
    debug_level_type debug_level () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging level.
    void set_debug_level (debug_level_type l);
#endif

    /// Report a syntax error.
    /// \param loc    where the syntax error is found.
    /// \param msg    a description of the syntax error.
    virtual void error (const location_type& loc, const std::string& msg);

    /// Report a syntax error.
    void error (const syntax_error& err);

  private:
    /// This class is not copyable.
    verilog_parser (const verilog_parser&);
    verilog_parser& operator= (const verilog_parser&);

    /// State numbers.
    typedef int state_type;

    /// Generate an error message.
    /// \param yystate   the state where the error occurred.
    /// \param yytoken   the lookahead token type, or yyempty_.
    virtual std::string yysyntax_error_ (state_type yystate,
                                         symbol_number_type yytoken) const;

    /// Compute post-reduction state.
    /// \param yystate   the current state
    /// \param yysym     the nonterminal to push on the stack
    state_type yy_lr_goto_state_ (state_type yystate, int yysym);

    /// Whether the given \c yypact_ value indicates a defaulted state.
    /// \param yyvalue   the value to check
    static bool yy_pact_value_is_default_ (int yyvalue);

    /// Whether the given \c yytable_ value indicates a syntax error.
    /// \param yyvalue   the value to check
    static bool yy_table_value_is_error_ (int yyvalue);

    static const short int yypact_ninf_;
    static const short int yytable_ninf_;

    /// Convert a scanner token number \a t to a symbol number.
    static token_number_type yytranslate_ (token_type t);

    // Tables.
  // YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
  // STATE-NUM.
  static const short int yypact_[];

  // YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
  // Performed when YYTABLE does not specify something else to do.  Zero
  // means the default is an error.
  static const unsigned short int yydefact_[];

  // YYPGOTO[NTERM-NUM].
  static const short int yypgoto_[];

  // YYDEFGOTO[NTERM-NUM].
  static const short int yydefgoto_[];

  // YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
  // positive, shift that token.  If negative, reduce the rule whose
  // number is the opposite.  If YYTABLE_NINF, syntax error.
  static const short int yytable_[];

  static const short int yycheck_[];

  // YYSTOS[STATE-NUM] -- The (internal number of the) accessing
  // symbol of state STATE-NUM.
  static const unsigned short int yystos_[];

  // YYR1[YYN] -- Symbol number of symbol that rule YYN derives.
  static const unsigned short int yyr1_[];

  // YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.
  static const unsigned char yyr2_[];


    /// Convert the symbol name \a n to a form suitable for a diagnostic.
    static std::string yytnamerr_ (const char *n);


    /// For a symbol, its name in clear.
    static const char* const yytname_[];
#if YYDEBUG
  // YYRLINE[YYN] -- Source line where rule number YYN was defined.
  static const unsigned short int yyrline_[];
    /// Report on the debug stream that the rule \a r is going to be reduced.
    virtual void yy_reduce_print_ (int r);
    /// Print the state stack on the debug stream.
    virtual void yystack_print_ ();

    // Debugging.
    int yydebug_;
    std::ostream* yycdebug_;

    /// \brief Display a symbol type, value and location.
    /// \param yyo    The output stream.
    /// \param yysym  The symbol.
    template <typename Base>
    void yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const;
#endif

    /// \brief Reclaim the memory associated to a symbol.
    /// \param yymsg     Why this token is reclaimed.
    ///                  If null, print nothing.
    /// \param yysym     The symbol.
    template <typename Base>
    void yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const;

  private:
    /// Type access provider for state based symbols.
    struct by_state
    {
      /// Default constructor.
      by_state ();

      /// The symbol type as needed by the constructor.
      typedef state_type kind_type;

      /// Constructor.
      by_state (kind_type s);

      /// Copy constructor.
      by_state (const by_state& other);

      /// Steal the symbol type from \a that.
      void move (by_state& that);

      /// The (internal) type number (corresponding to \a state).
      /// "empty" when empty.
      symbol_number_type type_get () const;

      enum { empty = 0 };

      /// The state.
      state_type state;
    };

    /// "Internal" symbol: element of the stack.
    struct stack_symbol_type : basic_symbol<by_state>
    {
      /// Superclass.
      typedef basic_symbol<by_state> super_type;
      /// Construct an empty symbol.
      stack_symbol_type ();
      /// Steal the contents from \a sym to build this.
      stack_symbol_type (state_type s, symbol_type& sym);
      /// Assignment, needed by push_back.
      stack_symbol_type& operator= (const stack_symbol_type& that);
    };

    /// Stack type.
    typedef stack<stack_symbol_type> stack_type;

    /// The stack.
    stack_type yystack_;

    /// Push a new state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param s    the symbol
    /// \warning the contents of \a s.value is stolen.
    void yypush_ (const char* m, stack_symbol_type& s);

    /// Push a new look ahead token on the state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param s    the state
    /// \param sym  the symbol (for its value and location).
    /// \warning the contents of \a s.value is stolen.
    void yypush_ (const char* m, state_type s, symbol_type& sym);

    /// Pop \a n symbols the three stacks.
    void yypop_ (unsigned int n = 1);

    // Constants.
    enum
    {
      yyeof_ = 0,
      yylast_ = 3866,     ///< Last index in yytable_.
      yynnts_ = 376,  ///< Number of nonterminal symbols.
      yyempty_ = -2,
      yyfinal_ = 3, ///< Termination state number.
      yyterror_ = 1,
      yyerrcode_ = 256,
      yyntokens_ = 234  ///< Number of tokens.
    };


    // User arguments.
    std::string * filename;
  };

  // Symbol number corresponding to token number t.
  inline
  verilog_parser::token_number_type
  verilog_parser::yytranslate_ (token_type t)
  {
    static
    const token_number_type
    translate_table[] =
    {
     0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233
    };
    const unsigned int user_token_number_max_ = 488;
    const token_number_type undef_token_ = 2;

    if (static_cast<int>(t) <= yyeof_)
      return yyeof_;
    else if (static_cast<unsigned int> (t) <= user_token_number_max_)
      return translate_table[t];
    else
      return undef_token_;
  }

  inline
  verilog_parser::syntax_error::syntax_error (const location_type& l, const std::string& m)
    : std::runtime_error (m)
    , location (l)
  {}

  // basic_symbol.
  template <typename Base>
  inline
  verilog_parser::basic_symbol<Base>::basic_symbol ()
    : value ()
  {}

  template <typename Base>
  inline
  verilog_parser::basic_symbol<Base>::basic_symbol (const basic_symbol& other)
    : Base (other)
    , value ()
    , location (other.location)
  {
      switch (other.type_get ())
    {
      case 330: // automatic_opt
        value.copy< Verilogast::automatic > (other.value);
        break;

      case 289: // charge_strength
        value.copy< Verilogast::charge_strength > (other.value);
        break;

      case 386: // cmos_switchtype
        value.copy< Verilogast::cmos_switchtype > (other.value);
        break;

      case 514: // edge_identifier_opt
      case 517: // edge_identifier
        value.copy< Verilogast::edge_identifier > (other.value);
        break;

      case 453: // edge_symbol
        value.copy< Verilogast::edge_symbol > (other.value);
        break;

      case 387: // enable_gatetype
        value.copy< Verilogast::enable_gatetype > (other.value);
        break;

      case 270: // io_type
        value.copy< Verilogast::io_type > (other.value);
        break;

      case 454: // level_symbol
        value.copy< Verilogast::level_symbol > (other.value);
        break;

      case 388: // mos_switchtype
        value.copy< Verilogast::mos_switchtype > (other.value);
        break;

      case 389: // n_input_gatetype
        value.copy< Verilogast::n_input_gatetype > (other.value);
        break;

      case 390: // n_output_gatetype
        value.copy< Verilogast::n_output_gatetype > (other.value);
        break;

      case 267: // net_type_opt
      case 281: // net_type
        value.copy< Verilogast::net_type > (other.value);
        break;

      case 282: // output_variable_type
        value.copy< Verilogast::output_variable_type > (other.value);
        break;

      case 265: // parameter_type
        value.copy< Verilogast::parameter_type > (other.value);
        break;

      case 391: // pass_en_switchtype
        value.copy< Verilogast::pass_en_switchtype > (other.value);
        break;

      case 392: // pass_switchtype
        value.copy< Verilogast::pass_switchtype > (other.value);
        break;

      case 505: // polarity_operator_opt
      case 519: // polarity_operator
        value.copy< Verilogast::polarity_operator > (other.value);
        break;

      case 343: // reg_opt
        value.copy< Verilogast::reg > (other.value);
        break;

      case 261: // signed_opt
        value.copy< Verilogast::signedType > (other.value);
        break;

      case 287: // strength0
      case 288: // strength1
        value.copy< Verilogast::strength > (other.value);
        break;

      case 346: // task_port_type
        value.copy< Verilogast::task_port_type > (other.value);
        break;

      case 275: // vectored_scalared_opt
        value.copy< Verilogast::vectored_scalared > (other.value);
        break;

      case 565: // z_or_x
        value.copy< Verilogast::z_or_x > (other.value);
        break;

      case 564: // zero_or_one
        value.copy< Verilogast::zero_or_one > (other.value);
        break;

      case 244: // module_keyword
      case 440: // key_input_opt
      case 481: // or_comma
        value.copy< int > (other.value);
        break;

      case 461: // always_construct
        value.copy< std::shared_ptr<Verilogast::always_construct> > (other.value);
        break;

      case 585: // attr_spec
        value.copy< std::shared_ptr<Verilogast::attr_spec> > (other.value);
        break;

      case 583: // attribute_instance
        value.copy< std::shared_ptr<Verilogast::attribute_instance> > (other.value);
        break;

      case 333: // attribute_instance_list_tf_input_declaration
        value.copy< std::shared_ptr<Verilogast::attribute_instance_list_tf_input_declaration> > (other.value);
        break;

      case 348: // block_item_declaration
        value.copy< std::shared_ptr<Verilogast::block_item_declaration> > (other.value);
        break;

      case 354: // block_real_type
        value.copy< std::shared_ptr<Verilogast::block_real_type> > (other.value);
        break;

      case 353: // block_variable_type
        value.copy< std::shared_ptr<Verilogast::block_variable_type> > (other.value);
        break;

      case 462: // blocking_assignment
        value.copy< std::shared_ptr<Verilogast::blocking_assignment> > (other.value);
        break;

      case 423: // case_generate_construct
        value.copy< std::shared_ptr<Verilogast::case_generate_construct> > (other.value);
        break;

      case 425: // case_generate_item
        value.copy< std::shared_ptr<Verilogast::case_generate_item> > (other.value);
        break;

      case 489: // case_item
        value.copy< std::shared_ptr<Verilogast::case_item> > (other.value);
        break;

      case 487: // case_statement
        value.copy< std::shared_ptr<Verilogast::case_statement> > (other.value);
        break;

      case 526: // checktime_condition_opt
      case 541: // checktime_condition
        value.copy< std::shared_ptr<Verilogast::checktime_condition> > (other.value);
        break;

      case 367: // cmos_switch_instance
        value.copy< std::shared_ptr<Verilogast::cmos_switch_instance> > (other.value);
        break;

      case 467: // colon_block_identifier_opt
        value.copy< std::shared_ptr<Verilogast::colon_block_identifier> > (other.value);
        break;

      case 426: // colon_opt
        value.copy< std::shared_ptr<Verilogast::colon_opt> > (other.value);
        break;

      case 566: // concatenation
        value.copy< std::shared_ptr<Verilogast::concatenation> > (other.value);
        break;

      case 572: // conditional_expression
        value.copy< std::shared_ptr<Verilogast::conditional_expression> > (other.value);
        break;

      case 420: // conditional_generate_construct
        value.copy< std::shared_ptr<Verilogast::conditional_generate_construct> > (other.value);
        break;

      case 485: // conditional_statement
        value.copy< std::shared_ptr<Verilogast::conditional_statement> > (other.value);
        break;

      case 456: // continuous_assign
        value.copy< std::shared_ptr<Verilogast::continuous_assign> > (other.value);
        break;

      case 542: // controlled_reference_event
        value.copy< std::shared_ptr<Verilogast::controlled_reference_event> > (other.value);
        break;

      case 558: // controlled_timing_check_event
        value.copy< std::shared_ptr<Verilogast::controlled_timing_check_event> > (other.value);
        break;

      case 543: // data_event
        value.copy< std::shared_ptr<Verilogast::data_event> > (other.value);
        break;

      case 317: // defparam_assignment
        value.copy< std::shared_ptr<Verilogast::defparam_assignment> > (other.value);
        break;

      case 291: // delay2
      case 364: // delay2_opt
        value.copy< std::shared_ptr<Verilogast::delay2> > (other.value);
        break;

      case 274: // delay3_opt
      case 290: // delay3
        value.copy< std::shared_ptr<Verilogast::delay3> > (other.value);
        break;

      case 474: // delay_control
        value.copy< std::shared_ptr<Verilogast::delay_control> > (other.value);
        break;

      case 463: // delay_or_event_control_opt
      case 475: // delay_or_event_control
        value.copy< std::shared_ptr<Verilogast::delay_or_event_control> > (other.value);
        break;

      case 292: // delay_value
        value.copy< std::shared_ptr<Verilogast::delay_value> > (other.value);
        break;

      case 528: // delayed_data_opt
      case 544: // delayed_data
        value.copy< std::shared_ptr<Verilogast::delayed_data> > (other.value);
        break;

      case 527: // delayed_reference_opt
      case 545: // delayed_reference
        value.copy< std::shared_ptr<Verilogast::delayed_reference> > (other.value);
        break;

      case 237: // description
        value.copy< std::shared_ptr<Verilogast::description> > (other.value);
        break;

      case 326: // dimension
        value.copy< std::shared_ptr<Verilogast::dimension> > (other.value);
        break;

      case 476: // disable_statement
        value.copy< std::shared_ptr<Verilogast::disable_statement> > (other.value);
        break;

      case 536: // dollor_fullskew_timing_check
        value.copy< std::shared_ptr<Verilogast::dollor_fullskew_timing_check> > (other.value);
        break;

      case 523: // dollor_hold_timing_check
        value.copy< std::shared_ptr<Verilogast::dollor_hold_timing_check> > (other.value);
        break;

      case 540: // dollor_nochange_timing_check
        value.copy< std::shared_ptr<Verilogast::dollor_nochange_timing_check> > (other.value);
        break;

      case 537: // dollor_period_timing_check
        value.copy< std::shared_ptr<Verilogast::dollor_period_timing_check> > (other.value);
        break;

      case 529: // dollor_recovery_timing_check
        value.copy< std::shared_ptr<Verilogast::dollor_recovery_timing_check> > (other.value);
        break;

      case 531: // dollor_recrem_timing_check
        value.copy< std::shared_ptr<Verilogast::dollor_recrem_timing_check> > (other.value);
        break;

      case 530: // dollor_removal_timing_check
        value.copy< std::shared_ptr<Verilogast::dollor_removal_timing_check> > (other.value);
        break;

      case 521: // dollor_setup_timing_check
        value.copy< std::shared_ptr<Verilogast::dollor_setup_timing_check> > (other.value);
        break;

      case 524: // dollor_setuphold_timing_check
        value.copy< std::shared_ptr<Verilogast::dollor_setuphold_timing_check> > (other.value);
        break;

      case 532: // dollor_skew_timing_check
        value.copy< std::shared_ptr<Verilogast::dollor_skew_timing_check> > (other.value);
        break;

      case 533: // dollor_timeskew_timing_check
        value.copy< std::shared_ptr<Verilogast::dollor_timeskew_timing_check> > (other.value);
        break;

      case 538: // dollor_width_timing_check
        value.copy< std::shared_ptr<Verilogast::dollor_width_timing_check> > (other.value);
        break;

      case 276: // drive_strength_opt
      case 286: // drive_strength
        value.copy< std::shared_ptr<Verilogast::drive_strength> > (other.value);
        break;

      case 561: // edge_control_specifier
        value.copy< std::shared_ptr<Verilogast::edge_control_specifier> > (other.value);
        break;

      case 563: // edge_descriptor
        value.copy< std::shared_ptr<Verilogast::edge_descriptor> > (other.value);
        break;

      case 452: // edge_indicator
        value.copy< std::shared_ptr<Verilogast::edge_indicator> > (other.value);
        break;

      case 451: // edge_input_list
        value.copy< std::shared_ptr<Verilogast::edge_input_list> > (other.value);
        break;

      case 512: // edge_sensitive_path_declaration
        value.copy< std::shared_ptr<Verilogast::edge_sensitive_path_declaration> > (other.value);
        break;

      case 369: // enable_gate_instance
        value.copy< std::shared_ptr<Verilogast::enable_gate_instance> > (other.value);
        break;

      case 546: // end_edge_offset
        value.copy< std::shared_ptr<Verilogast::end_edge_offset> > (other.value);
        break;

      case 534: // event_based_flag_opt
      case 547: // event_based_flag
        value.copy< std::shared_ptr<Verilogast::event_based_flag> > (other.value);
        break;

      case 477: // event_control
        value.copy< std::shared_ptr<Verilogast::event_control> > (other.value);
        break;

      case 271: // event_declaration
        value.copy< std::shared_ptr<Verilogast::event_declaration> > (other.value);
        break;

      case 479: // event_expression
        value.copy< std::shared_ptr<Verilogast::event_expression> > (other.value);
        break;

      case 297: // event_identifier_dimension_list
        value.copy< std::shared_ptr<Verilogast::event_identifier_dimension_list> > (other.value);
        break;

      case 478: // event_trigger
        value.copy< std::shared_ptr<Verilogast::event_trigger> > (other.value);
        break;

      case 315: // equ1_expression_opt
      case 380: // enable_terminal
      case 381: // input_terminal
      case 382: // ncontrol_terminal
      case 383: // inout_terminal
      case 384: // output_terminal
      case 385: // pcontrol_terminal
      case 410: // expression_opt
      case 516: // data_source_expression
      case 557: // and3_timing_check_condition_opt
      case 571: // base_expression
      case 573: // dimension_expression
      case 574: // expression
      case 577: // width_expression
        value.copy< std::shared_ptr<Verilogast::expression> > (other.value);
        break;

      case 515: // full_edge_sensitive_path_description
        value.copy< std::shared_ptr<Verilogast::full_edge_sensitive_path_description> > (other.value);
        break;

      case 506: // full_path_description
        value.copy< std::shared_ptr<Verilogast::full_path_description> > (other.value);
        break;

      case 568: // function_call
        value.copy< std::shared_ptr<Verilogast::function_call> > (other.value);
        break;

      case 328: // function_declaration
        value.copy< std::shared_ptr<Verilogast::function_declaration> > (other.value);
        break;

      case 331: // function_item_declaration
        value.copy< std::shared_ptr<Verilogast::function_item_declaration> > (other.value);
        break;

      case 335: // function_range_or_type
        value.copy< std::shared_ptr<Verilogast::function_range_or_type> > (other.value);
        break;

      case 355: // gate_instantiation
        value.copy< std::shared_ptr<Verilogast::gate_instantiation> > (other.value);
        break;

      case 422: // else_generate_block_or_null_opt
      case 427: // generate_block
      case 429: // generate_block_or_null
        value.copy< std::shared_ptr<Verilogast::generate_block> > (other.value);
        break;

      case 412: // generate_region
        value.copy< std::shared_ptr<Verilogast::generate_region> > (other.value);
        break;

      case 414: // genvar_declaration
        value.copy< std::shared_ptr<Verilogast::genvar_declaration> > (other.value);
        break;

      case 418: // genvar_initialization
        value.copy< std::shared_ptr<Verilogast::genvar_initialization> > (other.value);
        break;

      case 419: // genvar_iteration
        value.copy< std::shared_ptr<Verilogast::genvar_iteration> > (other.value);
        break;

      case 593: // hierarchical_identifier
        value.copy< std::shared_ptr<Verilogast::hierarchical_identifier> > (other.value);
        break;

      case 428: // colon_generate_block_identifier_opt
      case 586: // attr_name
      case 587: // block_identifier
      case 588: // event_identifier
      case 589: // function_identifier
      case 590: // gate_instance_identifier
      case 591: // generate_block_identifier
      case 592: // genvar_identifier
      case 597: // identifier
      case 598: // input_port_identifier
      case 599: // module_instance_identifier
      case 600: // net_identifier
      case 601: // output_port_identifier
      case 602: // parameter_identifier
      case 603: // port_identifier
      case 604: // real_identifier
      case 605: // specparam_identifier
      case 607: // task_identifier
      case 608: // terminal_identifier
      case 609: // variable_identifier
        value.copy< std::shared_ptr<Verilogast::identifier> > (other.value);
        break;

      case 595: // identifier_lsq_expression_rsq_opt
        value.copy< std::shared_ptr<Verilogast::identifier_lsq_expression_rsq> > (other.value);
        break;

      case 421: // if_generate_construct
        value.copy< std::shared_ptr<Verilogast::if_generate_construct> > (other.value);
        break;

      case 447: // init_val
        value.copy< std::shared_ptr<Verilogast::init_val> > (other.value);
        break;

      case 460: // initial_construct
        value.copy< std::shared_ptr<Verilogast::initial_construct> > (other.value);
        break;

      case 266: // inout_declaration
        value.copy< std::shared_ptr<Verilogast::inout_declaration> > (other.value);
        break;

      case 268: // input_declaration
        value.copy< std::shared_ptr<Verilogast::input_declaration> > (other.value);
        break;

      case 272: // integer_declaration
        value.copy< std::shared_ptr<Verilogast::integer_declaration> > (other.value);
        break;

      case 510: // path_delay_value
      case 511: // list_of_path_delay_expressions
        value.copy< std::shared_ptr<Verilogast::list_of_path_delay_expressions> > (other.value);
        break;

      case 406: // list_of_port_connections
        value.copy< std::shared_ptr<Verilogast::list_of_port_connections> > (other.value);
        break;

      case 260: // local_parameter_declaration
        value.copy< std::shared_ptr<Verilogast::local_parameter_declaration> > (other.value);
        break;

      case 417: // loop_generate_construct
        value.copy< std::shared_ptr<Verilogast::loop_generate_construct> > (other.value);
        break;

      case 491: // loop_statement
        value.copy< std::shared_ptr<Verilogast::loop_statement> > (other.value);
        break;

      case 322: // comma_error_limit_value_opt
      case 323: // error_limit_value
      case 324: // reject_limit_value
      case 325: // limit_value
      case 400: // ordered_parameter_assignment
      case 402: // mintypmax_expression_opt
      case 575: // mintypmax_expression
        value.copy< std::shared_ptr<Verilogast::mintypmax_expression> > (other.value);
        break;

      case 238: // module_declaration
        value.copy< std::shared_ptr<Verilogast::module_declaration> > (other.value);
        break;

      case 403: // module_instance
        value.copy< std::shared_ptr<Verilogast::module_instance> > (other.value);
        break;

      case 393: // module_instantiation
        value.copy< std::shared_ptr<Verilogast::module_instantiation> > (other.value);
        break;

      case 256: // module_item
      case 257: // non_port_module_item
      case 258: // module_or_generate_item
        value.copy< std::shared_ptr<Verilogast::module_item> > (other.value);
        break;

      case 370: // mos_switch_instance
        value.copy< std::shared_ptr<Verilogast::mos_switch_instance> > (other.value);
        break;

      case 567: // multiple_concatenation
        value.copy< std::shared_ptr<Verilogast::multiple_concatenation> > (other.value);
        break;

      case 371: // n_input_gate_instance
        value.copy< std::shared_ptr<Verilogast::n_input_gate_instance> > (other.value);
        break;

      case 372: // n_output_gate_instance
        value.copy< std::shared_ptr<Verilogast::n_output_gate_instance> > (other.value);
        break;

      case 368: // name_of_gate_instance_opt
      case 377: // name_of_gate_instance
        value.copy< std::shared_ptr<Verilogast::name_of_gate_instance> > (other.value);
        break;

      case 404: // name_of_module_instance_opt
      case 405: // name_of_module_instance
        value.copy< std::shared_ptr<Verilogast::name_of_module_instance> > (other.value);
        break;

      case 401: // named_parameter_assignment
        value.copy< std::shared_ptr<Verilogast::named_parameter_assignment> > (other.value);
        break;

      case 411: // named_port_connection
        value.copy< std::shared_ptr<Verilogast::named_port_connection> > (other.value);
        break;

      case 459: // net_assignment
        value.copy< std::shared_ptr<Verilogast::net_assignment> > (other.value);
        break;

      case 318: // net_decl_assignment
        value.copy< std::shared_ptr<Verilogast::net_decl_assignment> > (other.value);
        break;

      case 273: // net_declaration
        value.copy< std::shared_ptr<Verilogast::net_declaration> > (other.value);
        break;

      case 301: // net_identifier_dimension_list
        value.copy< std::shared_ptr<Verilogast::net_identifier_dimension_list> > (other.value);
        break;

      case 579: // net_lvalue
        value.copy< std::shared_ptr<Verilogast::net_lvalue> > (other.value);
        break;

      case 464: // nonblocking_assignment
        value.copy< std::shared_ptr<Verilogast::nonblocking_assignment> > (other.value);
        break;

      case 522: // notifier_opt
      case 548: // notifier
        value.copy< std::shared_ptr<Verilogast::notifier> > (other.value);
        break;

      case 581: // number
        value.copy< std::shared_ptr<Verilogast::number> > (other.value);
        break;

      case 409: // ordered_port_connection
        value.copy< std::shared_ptr<Verilogast::ordered_port_connection> > (other.value);
        break;

      case 269: // output_declaration
        value.copy< std::shared_ptr<Verilogast::output_declaration> > (other.value);
        break;

      case 466: // par_block
        value.copy< std::shared_ptr<Verilogast::par_block> > (other.value);
        break;

      case 513: // parallel_edge_sensitive_path_description
        value.copy< std::shared_ptr<Verilogast::parallel_edge_sensitive_path_description> > (other.value);
        break;

      case 504: // parallel_path_description
        value.copy< std::shared_ptr<Verilogast::parallel_path_description> > (other.value);
        break;

      case 319: // param_assignment
        value.copy< std::shared_ptr<Verilogast::param_assignment> > (other.value);
        break;

      case 263: // parameter_declaration
        value.copy< std::shared_ptr<Verilogast::parameter_declaration> > (other.value);
        break;

      case 395: // parameter_value_assignment_opt
      case 396: // parameter_value_assignment
      case 397: // list_of_parameter_assignments
        value.copy< std::shared_ptr<Verilogast::parameter_value_assignment> > (other.value);
        break;

      case 375: // pass_enable_switch_instance
        value.copy< std::shared_ptr<Verilogast::pass_enable_switch_instance> > (other.value);
        break;

      case 374: // pass_switch_instance
        value.copy< std::shared_ptr<Verilogast::pass_switch_instance> > (other.value);
        break;

      case 502: // path_declaration
        value.copy< std::shared_ptr<Verilogast::path_declaration> > (other.value);
        break;

      case 249: // port
        value.copy< std::shared_ptr<Verilogast::port> > (other.value);
        break;

      case 255: // port_declaration
        value.copy< std::shared_ptr<Verilogast::port_declaration> > (other.value);
        break;

      case 250: // port_expression_opt
      case 251: // port_expression
        value.copy< std::shared_ptr<Verilogast::port_expression> > (other.value);
        break;

      case 314: // port_identifier_equ1_expression_opt
        value.copy< std::shared_ptr<Verilogast::port_identifier_equ1_expression_opt> > (other.value);
        break;

      case 253: // port_reference
        value.copy< std::shared_ptr<Verilogast::port_reference> > (other.value);
        break;

      case 578: // primary
        value.copy< std::shared_ptr<Verilogast::primary> > (other.value);
        break;

      case 465: // procedural_continuous_assignments
        value.copy< std::shared_ptr<Verilogast::procedural_continuous_assignments> > (other.value);
        break;

      case 482: // procedural_timing_control
        value.copy< std::shared_ptr<Verilogast::procedural_timing_control> > (other.value);
        break;

      case 483: // procedural_timing_control_statement
        value.copy< std::shared_ptr<Verilogast::procedural_timing_control_statement> > (other.value);
        break;

      case 376: // pull_gate_instance
        value.copy< std::shared_ptr<Verilogast::pull_gate_instance> > (other.value);
        break;

      case 365: // pulldown_strength_opt
      case 378: // pulldown_strength
        value.copy< std::shared_ptr<Verilogast::pulldown_strength> > (other.value);
        break;

      case 366: // pullup_strength_opt
      case 379: // pullup_strength
        value.copy< std::shared_ptr<Verilogast::pullup_strength> > (other.value);
        break;

      case 500: // pulsestyle_declaration
        value.copy< std::shared_ptr<Verilogast::pulsestyle_declaration> > (other.value);
        break;

      case 262: // range_opt
      case 327: // range
        value.copy< std::shared_ptr<Verilogast::range> > (other.value);
        break;

      case 254: // lsquare_range_expression_rsquare_opt
      case 576: // lsquare_range_expression_rsquare
        value.copy< std::shared_ptr<Verilogast::range_expression> > (other.value);
        break;

      case 277: // real_declaration
        value.copy< std::shared_ptr<Verilogast::real_declaration> > (other.value);
        break;

      case 283: // real_type
        value.copy< std::shared_ptr<Verilogast::real_type> > (other.value);
        break;

      case 278: // realtime_declaration
        value.copy< std::shared_ptr<Verilogast::realtime_declaration> > (other.value);
        break;

      case 549: // reference_event
        value.copy< std::shared_ptr<Verilogast::reference_event> > (other.value);
        break;

      case 279: // reg_declaration
        value.copy< std::shared_ptr<Verilogast::reg_declaration> > (other.value);
        break;

      case 535: // remain_active_flag_opt
      case 550: // remain_active_flag
        value.copy< std::shared_ptr<Verilogast::remain_active_flag> > (other.value);
        break;

      case 468: // seq_block
        value.copy< std::shared_ptr<Verilogast::seq_block> > (other.value);
        break;

      case 449: // seq_input_list
        value.copy< std::shared_ptr<Verilogast::seq_input_list> > (other.value);
        break;

      case 443: // sequential_body
        value.copy< std::shared_ptr<Verilogast::sequential_body> > (other.value);
        break;

      case 448: // sequential_entry
        value.copy< std::shared_ptr<Verilogast::sequential_entry> > (other.value);
        break;

      case 501: // showcancelled_declaration
        value.copy< std::shared_ptr<Verilogast::showcancelled_declaration> > (other.value);
        break;

      case 503: // simple_path_declaration
        value.copy< std::shared_ptr<Verilogast::simple_path_declaration> > (other.value);
        break;

      case 497: // specify_block
        value.copy< std::shared_ptr<Verilogast::specify_block> > (other.value);
        break;

      case 509: // specify_inout_terminal_descriptor
        value.copy< std::shared_ptr<Verilogast::specify_inout_terminal_descriptor> > (other.value);
        break;

      case 499: // specify_item
        value.copy< std::shared_ptr<Verilogast::specify_item> > (other.value);
        break;

      case 560: // specify_terminal_descriptor
        value.copy< std::shared_ptr<Verilogast::specify_terminal_descriptor> > (other.value);
        break;

      case 320: // specparam_assignment
      case 321: // pulse_control_specparam
        value.copy< std::shared_ptr<Verilogast::specparam_assignment> > (other.value);
        break;

      case 264: // specparam_declaration
        value.copy< std::shared_ptr<Verilogast::specparam_declaration> > (other.value);
        break;

      case 525: // stamptime_condition_opt
      case 551: // stamptime_condition
        value.copy< std::shared_ptr<Verilogast::stamptime_condition> > (other.value);
        break;

      case 552: // start_edge_offset
        value.copy< std::shared_ptr<Verilogast::start_edge_offset> > (other.value);
        break;

      case 518: // state_dependent_path_declaration
        value.copy< std::shared_ptr<Verilogast::state_dependent_path_declaration> > (other.value);
        break;

      case 471: // statement
      case 472: // statement_or_null
      case 473: // function_statement
      case 486: // else_statement_or_null_opt
        value.copy< std::shared_ptr<Verilogast::statement> > (other.value);
        break;

      case 470: // statement_or_block_item
        value.copy< std::shared_ptr<Verilogast::statement_or_block_item> > (other.value);
        break;

      case 582: // string_typedef
        value.copy< std::shared_ptr<Verilogast::string_typedef> > (other.value);
        break;

      case 569: // system_function_call
        value.copy< std::shared_ptr<Verilogast::system_function_call> > (other.value);
        break;

      case 606: // system_function_identifier
        value.copy< std::shared_ptr<Verilogast::system_function_identifier> > (other.value);
        break;

      case 492: // system_task_enable
        value.copy< std::shared_ptr<Verilogast::system_task_enable> > (other.value);
        break;

      case 520: // system_timing_check
        value.copy< std::shared_ptr<Verilogast::system_timing_check> > (other.value);
        break;

      case 336: // task_declaration
        value.copy< std::shared_ptr<Verilogast::task_declaration> > (other.value);
        break;

      case 496: // task_enable
        value.copy< std::shared_ptr<Verilogast::task_enable> > (other.value);
        break;

      case 338: // task_item_declaration
        value.copy< std::shared_ptr<Verilogast::task_item_declaration> > (other.value);
        break;

      case 341: // task_port_item
        value.copy< std::shared_ptr<Verilogast::task_port_item> > (other.value);
        break;

      case 345: // tf_inout_declaration
        value.copy< std::shared_ptr<Verilogast::tf_inout_declaration> > (other.value);
        break;

      case 342: // tf_input_declaration
        value.copy< std::shared_ptr<Verilogast::tf_input_declaration> > (other.value);
        break;

      case 347: // tf_io_declaration_gen
        value.copy< std::shared_ptr<Verilogast::tf_io_declaration_gen> > (other.value);
        break;

      case 344: // tf_output_declaration
        value.copy< std::shared_ptr<Verilogast::tf_output_declaration> > (other.value);
        break;

      case 539: // threshold_opt
      case 553: // threshold
        value.copy< std::shared_ptr<Verilogast::threshold> > (other.value);
        break;

      case 280: // time_declaration
        value.copy< std::shared_ptr<Verilogast::time_declaration> > (other.value);
        break;

      case 555: // timing_check_event
        value.copy< std::shared_ptr<Verilogast::timing_check_event> > (other.value);
        break;

      case 556: // timing_check_event_control_opt
      case 559: // timing_check_event_control
        value.copy< std::shared_ptr<Verilogast::timing_check_event_control> > (other.value);
        break;

      case 554: // timing_check_limit
        value.copy< std::shared_ptr<Verilogast::timing_check_limit> > (other.value);
        break;

      case 442: // udp_body
        value.copy< std::shared_ptr<Verilogast::udp_body> > (other.value);
        break;

      case 430: // udp_declaration
        value.copy< std::shared_ptr<Verilogast::udp_declaration> > (other.value);
        break;

      case 434: // udp_declaration_port_list
        value.copy< std::shared_ptr<Verilogast::udp_declaration_port_list> > (other.value);
        break;

      case 444: // udp_initial_statement_opt
      case 446: // udp_initial_statement
        value.copy< std::shared_ptr<Verilogast::udp_initial_statement> > (other.value);
        break;

      case 438: // udp_input_declaration
        value.copy< std::shared_ptr<Verilogast::udp_input_declaration> > (other.value);
        break;

      case 439: // udp_input_declaration_sigular
        value.copy< std::shared_ptr<Verilogast::udp_input_declaration_sigular> > (other.value);
        break;

      case 437: // udp_output_declaration
        value.copy< std::shared_ptr<Verilogast::udp_output_declaration> > (other.value);
        break;

      case 436: // udp_port_declaration
        value.copy< std::shared_ptr<Verilogast::udp_port_declaration> > (other.value);
        break;

      case 432: // udp_port_list
        value.copy< std::shared_ptr<Verilogast::udp_port_list> > (other.value);
        break;

      case 441: // udp_reg_declaration
        value.copy< std::shared_ptr<Verilogast::udp_reg_declaration> > (other.value);
        break;

      case 285: // variable_type
        value.copy< std::shared_ptr<Verilogast::variable_type> > (other.value);
        break;

      case 484: // wait_statement
        value.copy< std::shared_ptr<Verilogast::wait_statement> > (other.value);
        break;

      case 450: // level_symbol_list
        value.copy< std::shared_ptr<std::list<Verilogast::level_symbol>> > (other.value);
        break;

      case 584: // comma_attr_spec_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::attr_spec>>> > (other.value);
        break;

      case 241: // attribute_instance_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::attribute_instance>>> > (other.value);
        break;

      case 332: // function_port_list
      case 334: // comma_attribute_instance_list_tf_input_declaration_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::attribute_instance_list_tf_input_declaration>>> > (other.value);
        break;

      case 351: // list_of_block_real_identifiers
      case 352: // comma_block_real_type_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::block_real_type>>> > (other.value);
        break;

      case 349: // list_of_block_variable_identifiers
      case 350: // comma_block_variable_type_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::block_variable_type>>> > (other.value);
        break;

      case 424: // case_generate_item_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::case_generate_item>>> > (other.value);
        break;

      case 488: // case_item_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::case_item>>> > (other.value);
        break;

      case 360: // comma_cmos_switch_instance_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::cmos_switch_instance>>> > (other.value);
        break;

      case 259: // parameter_override
      case 293: // list_of_defparam_assignments
      case 294: // comma_defparam_assignment_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::defparam_assignment>>> > (other.value);
        break;

      case 235: // source_text
      case 236: // description_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::description>>> > (other.value);
        break;

      case 284: // dimension_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::dimension>>> > (other.value);
        break;

      case 562: // comma_edge_descriptor_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::edge_descriptor>>> > (other.value);
        break;

      case 361: // comma_enable_gate_instance_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::enable_gate_instance>>> > (other.value);
        break;

      case 480: // event_expression_orcomma_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::event_expression>>> > (other.value);
        break;

      case 295: // list_of_event_identifiers
      case 296: // comma_event_identifier_dimension_list_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::event_identifier_dimension_list>>> > (other.value);
        break;

      case 373: // comma_output_terminal_list
      case 455: // comma_input_terminal_list
      case 490: // comma_expression_list
      case 493: // lp_expression_opt_comma_expression_list_rp_opt
      case 494: // lp_expression_opt_comma_expression_list_rp
      case 495: // comma_expression_opt_list
      case 570: // lp_expression_comma_expression_list_rp_op
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::expression>>> > (other.value);
        break;

      case 329: // function_item_declaration_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::function_item_declaration>>> > (other.value);
        break;

      case 305: // list_of_port_identifiers
      case 306: // comma_port_identifier_list
      case 415: // list_of_genvar_identifiers
      case 416: // comma_genvar_identifier_list
      case 433: // comma_input_port_identifier_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::identifier>>> > (other.value);
        break;

      case 594: // identifier_lsq_expression_rsq_opt_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::identifier_lsq_expression_rsq>>> > (other.value);
        break;

      case 398: // comma_ordered_parameter_assignment_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::mintypmax_expression>>> > (other.value);
        break;

      case 394: // comma_module_instance_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::module_instance>>> > (other.value);
        break;

      case 243: // module_item_list
      case 413: // module_or_generate_item_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::module_item>>> > (other.value);
        break;

      case 362: // comma_mos_switch_instance_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::mos_switch_instance>>> > (other.value);
        break;

      case 363: // comma_n_input_gate_instance_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::n_input_gate_instance>>> > (other.value);
        break;

      case 356: // comma_n_output_gate_instance_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::n_output_gate_instance>>> > (other.value);
        break;

      case 399: // comma_named_parameter_assignment_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::named_parameter_assignment>>> > (other.value);
        break;

      case 408: // comma_named_port_connection_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::named_port_connection>>> > (other.value);
        break;

      case 457: // list_of_net_assignments
      case 458: // comma_net_assignment_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::net_assignment>>> > (other.value);
        break;

      case 298: // list_of_net_decl_assignments
      case 299: // comma_net_decl_assignment_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::net_decl_assignment>>> > (other.value);
        break;

      case 300: // list_of_net_identifiers
      case 302: // comma_net_identifier_dimension_list_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::net_identifier_dimension_list>>> > (other.value);
        break;

      case 580: // comma_net_lvalue_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::net_lvalue>>> > (other.value);
        break;

      case 407: // comma_ordered_port_connection_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::ordered_port_connection>>> > (other.value);
        break;

      case 303: // list_of_param_assignments
      case 304: // comma_param_assignment_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::param_assignment>>> > (other.value);
        break;

      case 242: // module_parameter_port_list_opt
      case 245: // module_parameter_port_list
      case 246: // comma_parameter_declaration_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::parameter_declaration>>> > (other.value);
        break;

      case 357: // comma_pass_enable_switch_instance_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::pass_enable_switch_instance>>> > (other.value);
        break;

      case 358: // comma_pass_switch_instance_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::pass_switch_instance>>> > (other.value);
        break;

      case 247: // list_of_ports
      case 248: // comma_port_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::port>>> > (other.value);
        break;

      case 239: // list_of_port_declarations
      case 240: // comma_port_declaration_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::port_declaration>>> > (other.value);
        break;

      case 313: // list_of_variable_port_identifiers
      case 316: // comma_port_identifier_equ1_expression_opt_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::port_identifier_equ1_expression_opt>>> > (other.value);
        break;

      case 252: // comma_port_reference_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::port_reference>>> > (other.value);
        break;

      case 359: // comma_pull_gate_instance_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::pull_gate_instance>>> > (other.value);
        break;

      case 596: // lsquare_range_expression_rsquare_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::range_expression>>> > (other.value);
        break;

      case 307: // list_of_real_identifiers
      case 308: // comma_real_type_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::real_type>>> > (other.value);
        break;

      case 445: // sequential_entry_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::sequential_entry>>> > (other.value);
        break;

      case 507: // list_of_path_inouts
      case 508: // comma_specify_inout_terminal_descriptor_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::specify_inout_terminal_descriptor>>> > (other.value);
        break;

      case 498: // specify_item_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::specify_item>>> > (other.value);
        break;

      case 309: // list_of_specparam_assignments
      case 310: // comma_specparam_assignment_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::specparam_assignment>>> > (other.value);
        break;

      case 469: // statement_or_block_item_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::statement_or_block_item>>> > (other.value);
        break;

      case 337: // task_item_declaration_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::task_item_declaration>>> > (other.value);
        break;

      case 339: // task_port_list
      case 340: // comma_task_port_item_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::task_port_item>>> > (other.value);
        break;

      case 435: // comma_udp_input_declaration_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::udp_input_declaration_sigular>>> > (other.value);
        break;

      case 431: // udp_port_declaration_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::udp_port_declaration>>> > (other.value);
        break;

      case 311: // list_of_variable_identifiers
      case 312: // comma_variable_type_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::variable_type>>> > (other.value);
        break;

      case 223: // REAL_NUMBER
      case 224: // STRING
      case 225: // ESCAPED_IDENTIFIER
      case 226: // SIMPLE_IDENTIFIER
      case 227: // SYSTEM_TASK_FUNCTION_IDENTIFIER
        value.copy< std::string > (other.value);
        break;

      case 219: // UNSIGNED_NUMBER_size
      case 220: // OCTAL_NUMBER
      case 221: // BINARY_NUMBER
      case 222: // HEX_NUMBER
        value.copy< std::tuple<unsigned int,std::string,std::string> > (other.value);
        break;

      case 218: // UNSIGNED_NUMBER
        value.copy< unsigned int > (other.value);
        break;

      default:
        break;
    }

  }


  template <typename Base>
  inline
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const semantic_type& v, const location_type& l)
    : Base (t)
    , value ()
    , location (l)
  {
    (void) v;
      switch (this->type_get ())
    {
      case 330: // automatic_opt
        value.copy< Verilogast::automatic > (v);
        break;

      case 289: // charge_strength
        value.copy< Verilogast::charge_strength > (v);
        break;

      case 386: // cmos_switchtype
        value.copy< Verilogast::cmos_switchtype > (v);
        break;

      case 514: // edge_identifier_opt
      case 517: // edge_identifier
        value.copy< Verilogast::edge_identifier > (v);
        break;

      case 453: // edge_symbol
        value.copy< Verilogast::edge_symbol > (v);
        break;

      case 387: // enable_gatetype
        value.copy< Verilogast::enable_gatetype > (v);
        break;

      case 270: // io_type
        value.copy< Verilogast::io_type > (v);
        break;

      case 454: // level_symbol
        value.copy< Verilogast::level_symbol > (v);
        break;

      case 388: // mos_switchtype
        value.copy< Verilogast::mos_switchtype > (v);
        break;

      case 389: // n_input_gatetype
        value.copy< Verilogast::n_input_gatetype > (v);
        break;

      case 390: // n_output_gatetype
        value.copy< Verilogast::n_output_gatetype > (v);
        break;

      case 267: // net_type_opt
      case 281: // net_type
        value.copy< Verilogast::net_type > (v);
        break;

      case 282: // output_variable_type
        value.copy< Verilogast::output_variable_type > (v);
        break;

      case 265: // parameter_type
        value.copy< Verilogast::parameter_type > (v);
        break;

      case 391: // pass_en_switchtype
        value.copy< Verilogast::pass_en_switchtype > (v);
        break;

      case 392: // pass_switchtype
        value.copy< Verilogast::pass_switchtype > (v);
        break;

      case 505: // polarity_operator_opt
      case 519: // polarity_operator
        value.copy< Verilogast::polarity_operator > (v);
        break;

      case 343: // reg_opt
        value.copy< Verilogast::reg > (v);
        break;

      case 261: // signed_opt
        value.copy< Verilogast::signedType > (v);
        break;

      case 287: // strength0
      case 288: // strength1
        value.copy< Verilogast::strength > (v);
        break;

      case 346: // task_port_type
        value.copy< Verilogast::task_port_type > (v);
        break;

      case 275: // vectored_scalared_opt
        value.copy< Verilogast::vectored_scalared > (v);
        break;

      case 565: // z_or_x
        value.copy< Verilogast::z_or_x > (v);
        break;

      case 564: // zero_or_one
        value.copy< Verilogast::zero_or_one > (v);
        break;

      case 244: // module_keyword
      case 440: // key_input_opt
      case 481: // or_comma
        value.copy< int > (v);
        break;

      case 461: // always_construct
        value.copy< std::shared_ptr<Verilogast::always_construct> > (v);
        break;

      case 585: // attr_spec
        value.copy< std::shared_ptr<Verilogast::attr_spec> > (v);
        break;

      case 583: // attribute_instance
        value.copy< std::shared_ptr<Verilogast::attribute_instance> > (v);
        break;

      case 333: // attribute_instance_list_tf_input_declaration
        value.copy< std::shared_ptr<Verilogast::attribute_instance_list_tf_input_declaration> > (v);
        break;

      case 348: // block_item_declaration
        value.copy< std::shared_ptr<Verilogast::block_item_declaration> > (v);
        break;

      case 354: // block_real_type
        value.copy< std::shared_ptr<Verilogast::block_real_type> > (v);
        break;

      case 353: // block_variable_type
        value.copy< std::shared_ptr<Verilogast::block_variable_type> > (v);
        break;

      case 462: // blocking_assignment
        value.copy< std::shared_ptr<Verilogast::blocking_assignment> > (v);
        break;

      case 423: // case_generate_construct
        value.copy< std::shared_ptr<Verilogast::case_generate_construct> > (v);
        break;

      case 425: // case_generate_item
        value.copy< std::shared_ptr<Verilogast::case_generate_item> > (v);
        break;

      case 489: // case_item
        value.copy< std::shared_ptr<Verilogast::case_item> > (v);
        break;

      case 487: // case_statement
        value.copy< std::shared_ptr<Verilogast::case_statement> > (v);
        break;

      case 526: // checktime_condition_opt
      case 541: // checktime_condition
        value.copy< std::shared_ptr<Verilogast::checktime_condition> > (v);
        break;

      case 367: // cmos_switch_instance
        value.copy< std::shared_ptr<Verilogast::cmos_switch_instance> > (v);
        break;

      case 467: // colon_block_identifier_opt
        value.copy< std::shared_ptr<Verilogast::colon_block_identifier> > (v);
        break;

      case 426: // colon_opt
        value.copy< std::shared_ptr<Verilogast::colon_opt> > (v);
        break;

      case 566: // concatenation
        value.copy< std::shared_ptr<Verilogast::concatenation> > (v);
        break;

      case 572: // conditional_expression
        value.copy< std::shared_ptr<Verilogast::conditional_expression> > (v);
        break;

      case 420: // conditional_generate_construct
        value.copy< std::shared_ptr<Verilogast::conditional_generate_construct> > (v);
        break;

      case 485: // conditional_statement
        value.copy< std::shared_ptr<Verilogast::conditional_statement> > (v);
        break;

      case 456: // continuous_assign
        value.copy< std::shared_ptr<Verilogast::continuous_assign> > (v);
        break;

      case 542: // controlled_reference_event
        value.copy< std::shared_ptr<Verilogast::controlled_reference_event> > (v);
        break;

      case 558: // controlled_timing_check_event
        value.copy< std::shared_ptr<Verilogast::controlled_timing_check_event> > (v);
        break;

      case 543: // data_event
        value.copy< std::shared_ptr<Verilogast::data_event> > (v);
        break;

      case 317: // defparam_assignment
        value.copy< std::shared_ptr<Verilogast::defparam_assignment> > (v);
        break;

      case 291: // delay2
      case 364: // delay2_opt
        value.copy< std::shared_ptr<Verilogast::delay2> > (v);
        break;

      case 274: // delay3_opt
      case 290: // delay3
        value.copy< std::shared_ptr<Verilogast::delay3> > (v);
        break;

      case 474: // delay_control
        value.copy< std::shared_ptr<Verilogast::delay_control> > (v);
        break;

      case 463: // delay_or_event_control_opt
      case 475: // delay_or_event_control
        value.copy< std::shared_ptr<Verilogast::delay_or_event_control> > (v);
        break;

      case 292: // delay_value
        value.copy< std::shared_ptr<Verilogast::delay_value> > (v);
        break;

      case 528: // delayed_data_opt
      case 544: // delayed_data
        value.copy< std::shared_ptr<Verilogast::delayed_data> > (v);
        break;

      case 527: // delayed_reference_opt
      case 545: // delayed_reference
        value.copy< std::shared_ptr<Verilogast::delayed_reference> > (v);
        break;

      case 237: // description
        value.copy< std::shared_ptr<Verilogast::description> > (v);
        break;

      case 326: // dimension
        value.copy< std::shared_ptr<Verilogast::dimension> > (v);
        break;

      case 476: // disable_statement
        value.copy< std::shared_ptr<Verilogast::disable_statement> > (v);
        break;

      case 536: // dollor_fullskew_timing_check
        value.copy< std::shared_ptr<Verilogast::dollor_fullskew_timing_check> > (v);
        break;

      case 523: // dollor_hold_timing_check
        value.copy< std::shared_ptr<Verilogast::dollor_hold_timing_check> > (v);
        break;

      case 540: // dollor_nochange_timing_check
        value.copy< std::shared_ptr<Verilogast::dollor_nochange_timing_check> > (v);
        break;

      case 537: // dollor_period_timing_check
        value.copy< std::shared_ptr<Verilogast::dollor_period_timing_check> > (v);
        break;

      case 529: // dollor_recovery_timing_check
        value.copy< std::shared_ptr<Verilogast::dollor_recovery_timing_check> > (v);
        break;

      case 531: // dollor_recrem_timing_check
        value.copy< std::shared_ptr<Verilogast::dollor_recrem_timing_check> > (v);
        break;

      case 530: // dollor_removal_timing_check
        value.copy< std::shared_ptr<Verilogast::dollor_removal_timing_check> > (v);
        break;

      case 521: // dollor_setup_timing_check
        value.copy< std::shared_ptr<Verilogast::dollor_setup_timing_check> > (v);
        break;

      case 524: // dollor_setuphold_timing_check
        value.copy< std::shared_ptr<Verilogast::dollor_setuphold_timing_check> > (v);
        break;

      case 532: // dollor_skew_timing_check
        value.copy< std::shared_ptr<Verilogast::dollor_skew_timing_check> > (v);
        break;

      case 533: // dollor_timeskew_timing_check
        value.copy< std::shared_ptr<Verilogast::dollor_timeskew_timing_check> > (v);
        break;

      case 538: // dollor_width_timing_check
        value.copy< std::shared_ptr<Verilogast::dollor_width_timing_check> > (v);
        break;

      case 276: // drive_strength_opt
      case 286: // drive_strength
        value.copy< std::shared_ptr<Verilogast::drive_strength> > (v);
        break;

      case 561: // edge_control_specifier
        value.copy< std::shared_ptr<Verilogast::edge_control_specifier> > (v);
        break;

      case 563: // edge_descriptor
        value.copy< std::shared_ptr<Verilogast::edge_descriptor> > (v);
        break;

      case 452: // edge_indicator
        value.copy< std::shared_ptr<Verilogast::edge_indicator> > (v);
        break;

      case 451: // edge_input_list
        value.copy< std::shared_ptr<Verilogast::edge_input_list> > (v);
        break;

      case 512: // edge_sensitive_path_declaration
        value.copy< std::shared_ptr<Verilogast::edge_sensitive_path_declaration> > (v);
        break;

      case 369: // enable_gate_instance
        value.copy< std::shared_ptr<Verilogast::enable_gate_instance> > (v);
        break;

      case 546: // end_edge_offset
        value.copy< std::shared_ptr<Verilogast::end_edge_offset> > (v);
        break;

      case 534: // event_based_flag_opt
      case 547: // event_based_flag
        value.copy< std::shared_ptr<Verilogast::event_based_flag> > (v);
        break;

      case 477: // event_control
        value.copy< std::shared_ptr<Verilogast::event_control> > (v);
        break;

      case 271: // event_declaration
        value.copy< std::shared_ptr<Verilogast::event_declaration> > (v);
        break;

      case 479: // event_expression
        value.copy< std::shared_ptr<Verilogast::event_expression> > (v);
        break;

      case 297: // event_identifier_dimension_list
        value.copy< std::shared_ptr<Verilogast::event_identifier_dimension_list> > (v);
        break;

      case 478: // event_trigger
        value.copy< std::shared_ptr<Verilogast::event_trigger> > (v);
        break;

      case 315: // equ1_expression_opt
      case 380: // enable_terminal
      case 381: // input_terminal
      case 382: // ncontrol_terminal
      case 383: // inout_terminal
      case 384: // output_terminal
      case 385: // pcontrol_terminal
      case 410: // expression_opt
      case 516: // data_source_expression
      case 557: // and3_timing_check_condition_opt
      case 571: // base_expression
      case 573: // dimension_expression
      case 574: // expression
      case 577: // width_expression
        value.copy< std::shared_ptr<Verilogast::expression> > (v);
        break;

      case 515: // full_edge_sensitive_path_description
        value.copy< std::shared_ptr<Verilogast::full_edge_sensitive_path_description> > (v);
        break;

      case 506: // full_path_description
        value.copy< std::shared_ptr<Verilogast::full_path_description> > (v);
        break;

      case 568: // function_call
        value.copy< std::shared_ptr<Verilogast::function_call> > (v);
        break;

      case 328: // function_declaration
        value.copy< std::shared_ptr<Verilogast::function_declaration> > (v);
        break;

      case 331: // function_item_declaration
        value.copy< std::shared_ptr<Verilogast::function_item_declaration> > (v);
        break;

      case 335: // function_range_or_type
        value.copy< std::shared_ptr<Verilogast::function_range_or_type> > (v);
        break;

      case 355: // gate_instantiation
        value.copy< std::shared_ptr<Verilogast::gate_instantiation> > (v);
        break;

      case 422: // else_generate_block_or_null_opt
      case 427: // generate_block
      case 429: // generate_block_or_null
        value.copy< std::shared_ptr<Verilogast::generate_block> > (v);
        break;

      case 412: // generate_region
        value.copy< std::shared_ptr<Verilogast::generate_region> > (v);
        break;

      case 414: // genvar_declaration
        value.copy< std::shared_ptr<Verilogast::genvar_declaration> > (v);
        break;

      case 418: // genvar_initialization
        value.copy< std::shared_ptr<Verilogast::genvar_initialization> > (v);
        break;

      case 419: // genvar_iteration
        value.copy< std::shared_ptr<Verilogast::genvar_iteration> > (v);
        break;

      case 593: // hierarchical_identifier
        value.copy< std::shared_ptr<Verilogast::hierarchical_identifier> > (v);
        break;

      case 428: // colon_generate_block_identifier_opt
      case 586: // attr_name
      case 587: // block_identifier
      case 588: // event_identifier
      case 589: // function_identifier
      case 590: // gate_instance_identifier
      case 591: // generate_block_identifier
      case 592: // genvar_identifier
      case 597: // identifier
      case 598: // input_port_identifier
      case 599: // module_instance_identifier
      case 600: // net_identifier
      case 601: // output_port_identifier
      case 602: // parameter_identifier
      case 603: // port_identifier
      case 604: // real_identifier
      case 605: // specparam_identifier
      case 607: // task_identifier
      case 608: // terminal_identifier
      case 609: // variable_identifier
        value.copy< std::shared_ptr<Verilogast::identifier> > (v);
        break;

      case 595: // identifier_lsq_expression_rsq_opt
        value.copy< std::shared_ptr<Verilogast::identifier_lsq_expression_rsq> > (v);
        break;

      case 421: // if_generate_construct
        value.copy< std::shared_ptr<Verilogast::if_generate_construct> > (v);
        break;

      case 447: // init_val
        value.copy< std::shared_ptr<Verilogast::init_val> > (v);
        break;

      case 460: // initial_construct
        value.copy< std::shared_ptr<Verilogast::initial_construct> > (v);
        break;

      case 266: // inout_declaration
        value.copy< std::shared_ptr<Verilogast::inout_declaration> > (v);
        break;

      case 268: // input_declaration
        value.copy< std::shared_ptr<Verilogast::input_declaration> > (v);
        break;

      case 272: // integer_declaration
        value.copy< std::shared_ptr<Verilogast::integer_declaration> > (v);
        break;

      case 510: // path_delay_value
      case 511: // list_of_path_delay_expressions
        value.copy< std::shared_ptr<Verilogast::list_of_path_delay_expressions> > (v);
        break;

      case 406: // list_of_port_connections
        value.copy< std::shared_ptr<Verilogast::list_of_port_connections> > (v);
        break;

      case 260: // local_parameter_declaration
        value.copy< std::shared_ptr<Verilogast::local_parameter_declaration> > (v);
        break;

      case 417: // loop_generate_construct
        value.copy< std::shared_ptr<Verilogast::loop_generate_construct> > (v);
        break;

      case 491: // loop_statement
        value.copy< std::shared_ptr<Verilogast::loop_statement> > (v);
        break;

      case 322: // comma_error_limit_value_opt
      case 323: // error_limit_value
      case 324: // reject_limit_value
      case 325: // limit_value
      case 400: // ordered_parameter_assignment
      case 402: // mintypmax_expression_opt
      case 575: // mintypmax_expression
        value.copy< std::shared_ptr<Verilogast::mintypmax_expression> > (v);
        break;

      case 238: // module_declaration
        value.copy< std::shared_ptr<Verilogast::module_declaration> > (v);
        break;

      case 403: // module_instance
        value.copy< std::shared_ptr<Verilogast::module_instance> > (v);
        break;

      case 393: // module_instantiation
        value.copy< std::shared_ptr<Verilogast::module_instantiation> > (v);
        break;

      case 256: // module_item
      case 257: // non_port_module_item
      case 258: // module_or_generate_item
        value.copy< std::shared_ptr<Verilogast::module_item> > (v);
        break;

      case 370: // mos_switch_instance
        value.copy< std::shared_ptr<Verilogast::mos_switch_instance> > (v);
        break;

      case 567: // multiple_concatenation
        value.copy< std::shared_ptr<Verilogast::multiple_concatenation> > (v);
        break;

      case 371: // n_input_gate_instance
        value.copy< std::shared_ptr<Verilogast::n_input_gate_instance> > (v);
        break;

      case 372: // n_output_gate_instance
        value.copy< std::shared_ptr<Verilogast::n_output_gate_instance> > (v);
        break;

      case 368: // name_of_gate_instance_opt
      case 377: // name_of_gate_instance
        value.copy< std::shared_ptr<Verilogast::name_of_gate_instance> > (v);
        break;

      case 404: // name_of_module_instance_opt
      case 405: // name_of_module_instance
        value.copy< std::shared_ptr<Verilogast::name_of_module_instance> > (v);
        break;

      case 401: // named_parameter_assignment
        value.copy< std::shared_ptr<Verilogast::named_parameter_assignment> > (v);
        break;

      case 411: // named_port_connection
        value.copy< std::shared_ptr<Verilogast::named_port_connection> > (v);
        break;

      case 459: // net_assignment
        value.copy< std::shared_ptr<Verilogast::net_assignment> > (v);
        break;

      case 318: // net_decl_assignment
        value.copy< std::shared_ptr<Verilogast::net_decl_assignment> > (v);
        break;

      case 273: // net_declaration
        value.copy< std::shared_ptr<Verilogast::net_declaration> > (v);
        break;

      case 301: // net_identifier_dimension_list
        value.copy< std::shared_ptr<Verilogast::net_identifier_dimension_list> > (v);
        break;

      case 579: // net_lvalue
        value.copy< std::shared_ptr<Verilogast::net_lvalue> > (v);
        break;

      case 464: // nonblocking_assignment
        value.copy< std::shared_ptr<Verilogast::nonblocking_assignment> > (v);
        break;

      case 522: // notifier_opt
      case 548: // notifier
        value.copy< std::shared_ptr<Verilogast::notifier> > (v);
        break;

      case 581: // number
        value.copy< std::shared_ptr<Verilogast::number> > (v);
        break;

      case 409: // ordered_port_connection
        value.copy< std::shared_ptr<Verilogast::ordered_port_connection> > (v);
        break;

      case 269: // output_declaration
        value.copy< std::shared_ptr<Verilogast::output_declaration> > (v);
        break;

      case 466: // par_block
        value.copy< std::shared_ptr<Verilogast::par_block> > (v);
        break;

      case 513: // parallel_edge_sensitive_path_description
        value.copy< std::shared_ptr<Verilogast::parallel_edge_sensitive_path_description> > (v);
        break;

      case 504: // parallel_path_description
        value.copy< std::shared_ptr<Verilogast::parallel_path_description> > (v);
        break;

      case 319: // param_assignment
        value.copy< std::shared_ptr<Verilogast::param_assignment> > (v);
        break;

      case 263: // parameter_declaration
        value.copy< std::shared_ptr<Verilogast::parameter_declaration> > (v);
        break;

      case 395: // parameter_value_assignment_opt
      case 396: // parameter_value_assignment
      case 397: // list_of_parameter_assignments
        value.copy< std::shared_ptr<Verilogast::parameter_value_assignment> > (v);
        break;

      case 375: // pass_enable_switch_instance
        value.copy< std::shared_ptr<Verilogast::pass_enable_switch_instance> > (v);
        break;

      case 374: // pass_switch_instance
        value.copy< std::shared_ptr<Verilogast::pass_switch_instance> > (v);
        break;

      case 502: // path_declaration
        value.copy< std::shared_ptr<Verilogast::path_declaration> > (v);
        break;

      case 249: // port
        value.copy< std::shared_ptr<Verilogast::port> > (v);
        break;

      case 255: // port_declaration
        value.copy< std::shared_ptr<Verilogast::port_declaration> > (v);
        break;

      case 250: // port_expression_opt
      case 251: // port_expression
        value.copy< std::shared_ptr<Verilogast::port_expression> > (v);
        break;

      case 314: // port_identifier_equ1_expression_opt
        value.copy< std::shared_ptr<Verilogast::port_identifier_equ1_expression_opt> > (v);
        break;

      case 253: // port_reference
        value.copy< std::shared_ptr<Verilogast::port_reference> > (v);
        break;

      case 578: // primary
        value.copy< std::shared_ptr<Verilogast::primary> > (v);
        break;

      case 465: // procedural_continuous_assignments
        value.copy< std::shared_ptr<Verilogast::procedural_continuous_assignments> > (v);
        break;

      case 482: // procedural_timing_control
        value.copy< std::shared_ptr<Verilogast::procedural_timing_control> > (v);
        break;

      case 483: // procedural_timing_control_statement
        value.copy< std::shared_ptr<Verilogast::procedural_timing_control_statement> > (v);
        break;

      case 376: // pull_gate_instance
        value.copy< std::shared_ptr<Verilogast::pull_gate_instance> > (v);
        break;

      case 365: // pulldown_strength_opt
      case 378: // pulldown_strength
        value.copy< std::shared_ptr<Verilogast::pulldown_strength> > (v);
        break;

      case 366: // pullup_strength_opt
      case 379: // pullup_strength
        value.copy< std::shared_ptr<Verilogast::pullup_strength> > (v);
        break;

      case 500: // pulsestyle_declaration
        value.copy< std::shared_ptr<Verilogast::pulsestyle_declaration> > (v);
        break;

      case 262: // range_opt
      case 327: // range
        value.copy< std::shared_ptr<Verilogast::range> > (v);
        break;

      case 254: // lsquare_range_expression_rsquare_opt
      case 576: // lsquare_range_expression_rsquare
        value.copy< std::shared_ptr<Verilogast::range_expression> > (v);
        break;

      case 277: // real_declaration
        value.copy< std::shared_ptr<Verilogast::real_declaration> > (v);
        break;

      case 283: // real_type
        value.copy< std::shared_ptr<Verilogast::real_type> > (v);
        break;

      case 278: // realtime_declaration
        value.copy< std::shared_ptr<Verilogast::realtime_declaration> > (v);
        break;

      case 549: // reference_event
        value.copy< std::shared_ptr<Verilogast::reference_event> > (v);
        break;

      case 279: // reg_declaration
        value.copy< std::shared_ptr<Verilogast::reg_declaration> > (v);
        break;

      case 535: // remain_active_flag_opt
      case 550: // remain_active_flag
        value.copy< std::shared_ptr<Verilogast::remain_active_flag> > (v);
        break;

      case 468: // seq_block
        value.copy< std::shared_ptr<Verilogast::seq_block> > (v);
        break;

      case 449: // seq_input_list
        value.copy< std::shared_ptr<Verilogast::seq_input_list> > (v);
        break;

      case 443: // sequential_body
        value.copy< std::shared_ptr<Verilogast::sequential_body> > (v);
        break;

      case 448: // sequential_entry
        value.copy< std::shared_ptr<Verilogast::sequential_entry> > (v);
        break;

      case 501: // showcancelled_declaration
        value.copy< std::shared_ptr<Verilogast::showcancelled_declaration> > (v);
        break;

      case 503: // simple_path_declaration
        value.copy< std::shared_ptr<Verilogast::simple_path_declaration> > (v);
        break;

      case 497: // specify_block
        value.copy< std::shared_ptr<Verilogast::specify_block> > (v);
        break;

      case 509: // specify_inout_terminal_descriptor
        value.copy< std::shared_ptr<Verilogast::specify_inout_terminal_descriptor> > (v);
        break;

      case 499: // specify_item
        value.copy< std::shared_ptr<Verilogast::specify_item> > (v);
        break;

      case 560: // specify_terminal_descriptor
        value.copy< std::shared_ptr<Verilogast::specify_terminal_descriptor> > (v);
        break;

      case 320: // specparam_assignment
      case 321: // pulse_control_specparam
        value.copy< std::shared_ptr<Verilogast::specparam_assignment> > (v);
        break;

      case 264: // specparam_declaration
        value.copy< std::shared_ptr<Verilogast::specparam_declaration> > (v);
        break;

      case 525: // stamptime_condition_opt
      case 551: // stamptime_condition
        value.copy< std::shared_ptr<Verilogast::stamptime_condition> > (v);
        break;

      case 552: // start_edge_offset
        value.copy< std::shared_ptr<Verilogast::start_edge_offset> > (v);
        break;

      case 518: // state_dependent_path_declaration
        value.copy< std::shared_ptr<Verilogast::state_dependent_path_declaration> > (v);
        break;

      case 471: // statement
      case 472: // statement_or_null
      case 473: // function_statement
      case 486: // else_statement_or_null_opt
        value.copy< std::shared_ptr<Verilogast::statement> > (v);
        break;

      case 470: // statement_or_block_item
        value.copy< std::shared_ptr<Verilogast::statement_or_block_item> > (v);
        break;

      case 582: // string_typedef
        value.copy< std::shared_ptr<Verilogast::string_typedef> > (v);
        break;

      case 569: // system_function_call
        value.copy< std::shared_ptr<Verilogast::system_function_call> > (v);
        break;

      case 606: // system_function_identifier
        value.copy< std::shared_ptr<Verilogast::system_function_identifier> > (v);
        break;

      case 492: // system_task_enable
        value.copy< std::shared_ptr<Verilogast::system_task_enable> > (v);
        break;

      case 520: // system_timing_check
        value.copy< std::shared_ptr<Verilogast::system_timing_check> > (v);
        break;

      case 336: // task_declaration
        value.copy< std::shared_ptr<Verilogast::task_declaration> > (v);
        break;

      case 496: // task_enable
        value.copy< std::shared_ptr<Verilogast::task_enable> > (v);
        break;

      case 338: // task_item_declaration
        value.copy< std::shared_ptr<Verilogast::task_item_declaration> > (v);
        break;

      case 341: // task_port_item
        value.copy< std::shared_ptr<Verilogast::task_port_item> > (v);
        break;

      case 345: // tf_inout_declaration
        value.copy< std::shared_ptr<Verilogast::tf_inout_declaration> > (v);
        break;

      case 342: // tf_input_declaration
        value.copy< std::shared_ptr<Verilogast::tf_input_declaration> > (v);
        break;

      case 347: // tf_io_declaration_gen
        value.copy< std::shared_ptr<Verilogast::tf_io_declaration_gen> > (v);
        break;

      case 344: // tf_output_declaration
        value.copy< std::shared_ptr<Verilogast::tf_output_declaration> > (v);
        break;

      case 539: // threshold_opt
      case 553: // threshold
        value.copy< std::shared_ptr<Verilogast::threshold> > (v);
        break;

      case 280: // time_declaration
        value.copy< std::shared_ptr<Verilogast::time_declaration> > (v);
        break;

      case 555: // timing_check_event
        value.copy< std::shared_ptr<Verilogast::timing_check_event> > (v);
        break;

      case 556: // timing_check_event_control_opt
      case 559: // timing_check_event_control
        value.copy< std::shared_ptr<Verilogast::timing_check_event_control> > (v);
        break;

      case 554: // timing_check_limit
        value.copy< std::shared_ptr<Verilogast::timing_check_limit> > (v);
        break;

      case 442: // udp_body
        value.copy< std::shared_ptr<Verilogast::udp_body> > (v);
        break;

      case 430: // udp_declaration
        value.copy< std::shared_ptr<Verilogast::udp_declaration> > (v);
        break;

      case 434: // udp_declaration_port_list
        value.copy< std::shared_ptr<Verilogast::udp_declaration_port_list> > (v);
        break;

      case 444: // udp_initial_statement_opt
      case 446: // udp_initial_statement
        value.copy< std::shared_ptr<Verilogast::udp_initial_statement> > (v);
        break;

      case 438: // udp_input_declaration
        value.copy< std::shared_ptr<Verilogast::udp_input_declaration> > (v);
        break;

      case 439: // udp_input_declaration_sigular
        value.copy< std::shared_ptr<Verilogast::udp_input_declaration_sigular> > (v);
        break;

      case 437: // udp_output_declaration
        value.copy< std::shared_ptr<Verilogast::udp_output_declaration> > (v);
        break;

      case 436: // udp_port_declaration
        value.copy< std::shared_ptr<Verilogast::udp_port_declaration> > (v);
        break;

      case 432: // udp_port_list
        value.copy< std::shared_ptr<Verilogast::udp_port_list> > (v);
        break;

      case 441: // udp_reg_declaration
        value.copy< std::shared_ptr<Verilogast::udp_reg_declaration> > (v);
        break;

      case 285: // variable_type
        value.copy< std::shared_ptr<Verilogast::variable_type> > (v);
        break;

      case 484: // wait_statement
        value.copy< std::shared_ptr<Verilogast::wait_statement> > (v);
        break;

      case 450: // level_symbol_list
        value.copy< std::shared_ptr<std::list<Verilogast::level_symbol>> > (v);
        break;

      case 584: // comma_attr_spec_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::attr_spec>>> > (v);
        break;

      case 241: // attribute_instance_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::attribute_instance>>> > (v);
        break;

      case 332: // function_port_list
      case 334: // comma_attribute_instance_list_tf_input_declaration_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::attribute_instance_list_tf_input_declaration>>> > (v);
        break;

      case 351: // list_of_block_real_identifiers
      case 352: // comma_block_real_type_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::block_real_type>>> > (v);
        break;

      case 349: // list_of_block_variable_identifiers
      case 350: // comma_block_variable_type_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::block_variable_type>>> > (v);
        break;

      case 424: // case_generate_item_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::case_generate_item>>> > (v);
        break;

      case 488: // case_item_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::case_item>>> > (v);
        break;

      case 360: // comma_cmos_switch_instance_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::cmos_switch_instance>>> > (v);
        break;

      case 259: // parameter_override
      case 293: // list_of_defparam_assignments
      case 294: // comma_defparam_assignment_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::defparam_assignment>>> > (v);
        break;

      case 235: // source_text
      case 236: // description_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::description>>> > (v);
        break;

      case 284: // dimension_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::dimension>>> > (v);
        break;

      case 562: // comma_edge_descriptor_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::edge_descriptor>>> > (v);
        break;

      case 361: // comma_enable_gate_instance_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::enable_gate_instance>>> > (v);
        break;

      case 480: // event_expression_orcomma_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::event_expression>>> > (v);
        break;

      case 295: // list_of_event_identifiers
      case 296: // comma_event_identifier_dimension_list_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::event_identifier_dimension_list>>> > (v);
        break;

      case 373: // comma_output_terminal_list
      case 455: // comma_input_terminal_list
      case 490: // comma_expression_list
      case 493: // lp_expression_opt_comma_expression_list_rp_opt
      case 494: // lp_expression_opt_comma_expression_list_rp
      case 495: // comma_expression_opt_list
      case 570: // lp_expression_comma_expression_list_rp_op
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::expression>>> > (v);
        break;

      case 329: // function_item_declaration_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::function_item_declaration>>> > (v);
        break;

      case 305: // list_of_port_identifiers
      case 306: // comma_port_identifier_list
      case 415: // list_of_genvar_identifiers
      case 416: // comma_genvar_identifier_list
      case 433: // comma_input_port_identifier_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::identifier>>> > (v);
        break;

      case 594: // identifier_lsq_expression_rsq_opt_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::identifier_lsq_expression_rsq>>> > (v);
        break;

      case 398: // comma_ordered_parameter_assignment_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::mintypmax_expression>>> > (v);
        break;

      case 394: // comma_module_instance_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::module_instance>>> > (v);
        break;

      case 243: // module_item_list
      case 413: // module_or_generate_item_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::module_item>>> > (v);
        break;

      case 362: // comma_mos_switch_instance_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::mos_switch_instance>>> > (v);
        break;

      case 363: // comma_n_input_gate_instance_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::n_input_gate_instance>>> > (v);
        break;

      case 356: // comma_n_output_gate_instance_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::n_output_gate_instance>>> > (v);
        break;

      case 399: // comma_named_parameter_assignment_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::named_parameter_assignment>>> > (v);
        break;

      case 408: // comma_named_port_connection_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::named_port_connection>>> > (v);
        break;

      case 457: // list_of_net_assignments
      case 458: // comma_net_assignment_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::net_assignment>>> > (v);
        break;

      case 298: // list_of_net_decl_assignments
      case 299: // comma_net_decl_assignment_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::net_decl_assignment>>> > (v);
        break;

      case 300: // list_of_net_identifiers
      case 302: // comma_net_identifier_dimension_list_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::net_identifier_dimension_list>>> > (v);
        break;

      case 580: // comma_net_lvalue_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::net_lvalue>>> > (v);
        break;

      case 407: // comma_ordered_port_connection_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::ordered_port_connection>>> > (v);
        break;

      case 303: // list_of_param_assignments
      case 304: // comma_param_assignment_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::param_assignment>>> > (v);
        break;

      case 242: // module_parameter_port_list_opt
      case 245: // module_parameter_port_list
      case 246: // comma_parameter_declaration_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::parameter_declaration>>> > (v);
        break;

      case 357: // comma_pass_enable_switch_instance_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::pass_enable_switch_instance>>> > (v);
        break;

      case 358: // comma_pass_switch_instance_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::pass_switch_instance>>> > (v);
        break;

      case 247: // list_of_ports
      case 248: // comma_port_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::port>>> > (v);
        break;

      case 239: // list_of_port_declarations
      case 240: // comma_port_declaration_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::port_declaration>>> > (v);
        break;

      case 313: // list_of_variable_port_identifiers
      case 316: // comma_port_identifier_equ1_expression_opt_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::port_identifier_equ1_expression_opt>>> > (v);
        break;

      case 252: // comma_port_reference_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::port_reference>>> > (v);
        break;

      case 359: // comma_pull_gate_instance_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::pull_gate_instance>>> > (v);
        break;

      case 596: // lsquare_range_expression_rsquare_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::range_expression>>> > (v);
        break;

      case 307: // list_of_real_identifiers
      case 308: // comma_real_type_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::real_type>>> > (v);
        break;

      case 445: // sequential_entry_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::sequential_entry>>> > (v);
        break;

      case 507: // list_of_path_inouts
      case 508: // comma_specify_inout_terminal_descriptor_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::specify_inout_terminal_descriptor>>> > (v);
        break;

      case 498: // specify_item_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::specify_item>>> > (v);
        break;

      case 309: // list_of_specparam_assignments
      case 310: // comma_specparam_assignment_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::specparam_assignment>>> > (v);
        break;

      case 469: // statement_or_block_item_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::statement_or_block_item>>> > (v);
        break;

      case 337: // task_item_declaration_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::task_item_declaration>>> > (v);
        break;

      case 339: // task_port_list
      case 340: // comma_task_port_item_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::task_port_item>>> > (v);
        break;

      case 435: // comma_udp_input_declaration_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::udp_input_declaration_sigular>>> > (v);
        break;

      case 431: // udp_port_declaration_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::udp_port_declaration>>> > (v);
        break;

      case 311: // list_of_variable_identifiers
      case 312: // comma_variable_type_list
        value.copy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::variable_type>>> > (v);
        break;

      case 223: // REAL_NUMBER
      case 224: // STRING
      case 225: // ESCAPED_IDENTIFIER
      case 226: // SIMPLE_IDENTIFIER
      case 227: // SYSTEM_TASK_FUNCTION_IDENTIFIER
        value.copy< std::string > (v);
        break;

      case 219: // UNSIGNED_NUMBER_size
      case 220: // OCTAL_NUMBER
      case 221: // BINARY_NUMBER
      case 222: // HEX_NUMBER
        value.copy< std::tuple<unsigned int,std::string,std::string> > (v);
        break;

      case 218: // UNSIGNED_NUMBER
        value.copy< unsigned int > (v);
        break;

      default:
        break;
    }
}


  // Implementation of basic_symbol constructor for each type.

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const location_type& l)
    : Base (t)
    , value ()
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const Verilogast::automatic v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const Verilogast::charge_strength v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const Verilogast::cmos_switchtype v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const Verilogast::edge_identifier v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const Verilogast::edge_symbol v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const Verilogast::enable_gatetype v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const Verilogast::io_type v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const Verilogast::level_symbol v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const Verilogast::mos_switchtype v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const Verilogast::n_input_gatetype v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const Verilogast::n_output_gatetype v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const Verilogast::net_type v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const Verilogast::output_variable_type v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const Verilogast::parameter_type v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const Verilogast::pass_en_switchtype v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const Verilogast::pass_switchtype v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const Verilogast::polarity_operator v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const Verilogast::reg v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const Verilogast::signedType v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const Verilogast::strength v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const Verilogast::task_port_type v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const Verilogast::vectored_scalared v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const Verilogast::z_or_x v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const Verilogast::zero_or_one v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const int v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::always_construct> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::attr_spec> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::attribute_instance> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::attribute_instance_list_tf_input_declaration> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::block_item_declaration> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::block_real_type> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::block_variable_type> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::blocking_assignment> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::case_generate_construct> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::case_generate_item> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::case_item> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::case_statement> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::checktime_condition> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::cmos_switch_instance> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::colon_block_identifier> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::colon_opt> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::concatenation> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::conditional_expression> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::conditional_generate_construct> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::conditional_statement> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::continuous_assign> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::controlled_reference_event> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::controlled_timing_check_event> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::data_event> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::defparam_assignment> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::delay2> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::delay3> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::delay_control> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::delay_or_event_control> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::delay_value> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::delayed_data> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::delayed_reference> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::description> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::dimension> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::disable_statement> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::dollor_fullskew_timing_check> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::dollor_hold_timing_check> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::dollor_nochange_timing_check> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::dollor_period_timing_check> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::dollor_recovery_timing_check> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::dollor_recrem_timing_check> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::dollor_removal_timing_check> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::dollor_setup_timing_check> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::dollor_setuphold_timing_check> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::dollor_skew_timing_check> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::dollor_timeskew_timing_check> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::dollor_width_timing_check> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::drive_strength> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::edge_control_specifier> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::edge_descriptor> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::edge_indicator> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::edge_input_list> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::edge_sensitive_path_declaration> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::enable_gate_instance> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::end_edge_offset> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::event_based_flag> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::event_control> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::event_declaration> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::event_expression> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::event_identifier_dimension_list> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::event_trigger> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::expression> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::full_edge_sensitive_path_description> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::full_path_description> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::function_call> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::function_declaration> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::function_item_declaration> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::function_range_or_type> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::gate_instantiation> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::generate_block> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::generate_region> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::genvar_declaration> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::genvar_initialization> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::genvar_iteration> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::hierarchical_identifier> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::identifier> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::identifier_lsq_expression_rsq> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::if_generate_construct> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::init_val> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::initial_construct> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::inout_declaration> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::input_declaration> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::integer_declaration> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::list_of_path_delay_expressions> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::list_of_port_connections> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::local_parameter_declaration> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::loop_generate_construct> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::loop_statement> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::mintypmax_expression> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::module_declaration> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::module_instance> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::module_instantiation> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::module_item> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::mos_switch_instance> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::multiple_concatenation> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::n_input_gate_instance> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::n_output_gate_instance> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::name_of_gate_instance> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::name_of_module_instance> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::named_parameter_assignment> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::named_port_connection> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::net_assignment> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::net_decl_assignment> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::net_declaration> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::net_identifier_dimension_list> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::net_lvalue> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::nonblocking_assignment> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::notifier> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::number> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::ordered_port_connection> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::output_declaration> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::par_block> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::parallel_edge_sensitive_path_description> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::parallel_path_description> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::param_assignment> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::parameter_declaration> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::parameter_value_assignment> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::pass_enable_switch_instance> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::pass_switch_instance> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::path_declaration> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::port> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::port_declaration> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::port_expression> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::port_identifier_equ1_expression_opt> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::port_reference> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::primary> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::procedural_continuous_assignments> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::procedural_timing_control> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::procedural_timing_control_statement> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::pull_gate_instance> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::pulldown_strength> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::pullup_strength> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::pulsestyle_declaration> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::range> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::range_expression> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::real_declaration> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::real_type> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::realtime_declaration> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::reference_event> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::reg_declaration> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::remain_active_flag> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::seq_block> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::seq_input_list> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::sequential_body> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::sequential_entry> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::showcancelled_declaration> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::simple_path_declaration> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::specify_block> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::specify_inout_terminal_descriptor> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::specify_item> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::specify_terminal_descriptor> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::specparam_assignment> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::specparam_declaration> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::stamptime_condition> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::start_edge_offset> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::state_dependent_path_declaration> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::statement> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::statement_or_block_item> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::string_typedef> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::system_function_call> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::system_function_identifier> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::system_task_enable> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::system_timing_check> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::task_declaration> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::task_enable> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::task_item_declaration> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::task_port_item> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::tf_inout_declaration> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::tf_input_declaration> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::tf_io_declaration_gen> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::tf_output_declaration> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::threshold> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::time_declaration> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::timing_check_event> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::timing_check_event_control> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::timing_check_limit> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::udp_body> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::udp_declaration> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::udp_declaration_port_list> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::udp_initial_statement> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::udp_input_declaration> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::udp_input_declaration_sigular> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::udp_output_declaration> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::udp_port_declaration> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::udp_port_list> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::udp_reg_declaration> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::variable_type> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<Verilogast::wait_statement> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<Verilogast::level_symbol>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::attr_spec>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::attribute_instance>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::attribute_instance_list_tf_input_declaration>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::block_real_type>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::block_variable_type>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::case_generate_item>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::case_item>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::cmos_switch_instance>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::defparam_assignment>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::description>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::dimension>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::edge_descriptor>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::enable_gate_instance>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::event_expression>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::event_identifier_dimension_list>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::expression>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::function_item_declaration>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::identifier>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::identifier_lsq_expression_rsq>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::mintypmax_expression>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::module_instance>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::module_item>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::mos_switch_instance>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::n_input_gate_instance>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::n_output_gate_instance>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::named_parameter_assignment>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::named_port_connection>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::net_assignment>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::net_decl_assignment>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::net_identifier_dimension_list>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::net_lvalue>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::ordered_port_connection>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::param_assignment>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::parameter_declaration>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::pass_enable_switch_instance>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::pass_switch_instance>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::port>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::port_declaration>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::port_identifier_equ1_expression_opt>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::port_reference>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::pull_gate_instance>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::range_expression>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::real_type>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::sequential_entry>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::specify_inout_terminal_descriptor>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::specify_item>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::specparam_assignment>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::statement_or_block_item>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::task_item_declaration>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::task_port_item>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::udp_input_declaration_sigular>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::udp_port_declaration>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::shared_ptr<std::list<std::shared_ptr<Verilogast::variable_type>>> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::string v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::tuple<unsigned int, std::string, std::string> v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  verilog_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const unsigned int v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}


  template <typename Base>
  inline
  verilog_parser::basic_symbol<Base>::~basic_symbol ()
  {
    // User destructor.
    symbol_number_type yytype = this->type_get ();
    switch (yytype)
    {
   default:
      break;
    }

    // Type destructor.
    switch (yytype)
    {
      case 330: // automatic_opt
        value.template destroy< Verilogast::automatic > ();
        break;

      case 289: // charge_strength
        value.template destroy< Verilogast::charge_strength > ();
        break;

      case 386: // cmos_switchtype
        value.template destroy< Verilogast::cmos_switchtype > ();
        break;

      case 514: // edge_identifier_opt
      case 517: // edge_identifier
        value.template destroy< Verilogast::edge_identifier > ();
        break;

      case 453: // edge_symbol
        value.template destroy< Verilogast::edge_symbol > ();
        break;

      case 387: // enable_gatetype
        value.template destroy< Verilogast::enable_gatetype > ();
        break;

      case 270: // io_type
        value.template destroy< Verilogast::io_type > ();
        break;

      case 454: // level_symbol
        value.template destroy< Verilogast::level_symbol > ();
        break;

      case 388: // mos_switchtype
        value.template destroy< Verilogast::mos_switchtype > ();
        break;

      case 389: // n_input_gatetype
        value.template destroy< Verilogast::n_input_gatetype > ();
        break;

      case 390: // n_output_gatetype
        value.template destroy< Verilogast::n_output_gatetype > ();
        break;

      case 267: // net_type_opt
      case 281: // net_type
        value.template destroy< Verilogast::net_type > ();
        break;

      case 282: // output_variable_type
        value.template destroy< Verilogast::output_variable_type > ();
        break;

      case 265: // parameter_type
        value.template destroy< Verilogast::parameter_type > ();
        break;

      case 391: // pass_en_switchtype
        value.template destroy< Verilogast::pass_en_switchtype > ();
        break;

      case 392: // pass_switchtype
        value.template destroy< Verilogast::pass_switchtype > ();
        break;

      case 505: // polarity_operator_opt
      case 519: // polarity_operator
        value.template destroy< Verilogast::polarity_operator > ();
        break;

      case 343: // reg_opt
        value.template destroy< Verilogast::reg > ();
        break;

      case 261: // signed_opt
        value.template destroy< Verilogast::signedType > ();
        break;

      case 287: // strength0
      case 288: // strength1
        value.template destroy< Verilogast::strength > ();
        break;

      case 346: // task_port_type
        value.template destroy< Verilogast::task_port_type > ();
        break;

      case 275: // vectored_scalared_opt
        value.template destroy< Verilogast::vectored_scalared > ();
        break;

      case 565: // z_or_x
        value.template destroy< Verilogast::z_or_x > ();
        break;

      case 564: // zero_or_one
        value.template destroy< Verilogast::zero_or_one > ();
        break;

      case 244: // module_keyword
      case 440: // key_input_opt
      case 481: // or_comma
        value.template destroy< int > ();
        break;

      case 461: // always_construct
        value.template destroy< std::shared_ptr<Verilogast::always_construct> > ();
        break;

      case 585: // attr_spec
        value.template destroy< std::shared_ptr<Verilogast::attr_spec> > ();
        break;

      case 583: // attribute_instance
        value.template destroy< std::shared_ptr<Verilogast::attribute_instance> > ();
        break;

      case 333: // attribute_instance_list_tf_input_declaration
        value.template destroy< std::shared_ptr<Verilogast::attribute_instance_list_tf_input_declaration> > ();
        break;

      case 348: // block_item_declaration
        value.template destroy< std::shared_ptr<Verilogast::block_item_declaration> > ();
        break;

      case 354: // block_real_type
        value.template destroy< std::shared_ptr<Verilogast::block_real_type> > ();
        break;

      case 353: // block_variable_type
        value.template destroy< std::shared_ptr<Verilogast::block_variable_type> > ();
        break;

      case 462: // blocking_assignment
        value.template destroy< std::shared_ptr<Verilogast::blocking_assignment> > ();
        break;

      case 423: // case_generate_construct
        value.template destroy< std::shared_ptr<Verilogast::case_generate_construct> > ();
        break;

      case 425: // case_generate_item
        value.template destroy< std::shared_ptr<Verilogast::case_generate_item> > ();
        break;

      case 489: // case_item
        value.template destroy< std::shared_ptr<Verilogast::case_item> > ();
        break;

      case 487: // case_statement
        value.template destroy< std::shared_ptr<Verilogast::case_statement> > ();
        break;

      case 526: // checktime_condition_opt
      case 541: // checktime_condition
        value.template destroy< std::shared_ptr<Verilogast::checktime_condition> > ();
        break;

      case 367: // cmos_switch_instance
        value.template destroy< std::shared_ptr<Verilogast::cmos_switch_instance> > ();
        break;

      case 467: // colon_block_identifier_opt
        value.template destroy< std::shared_ptr<Verilogast::colon_block_identifier> > ();
        break;

      case 426: // colon_opt
        value.template destroy< std::shared_ptr<Verilogast::colon_opt> > ();
        break;

      case 566: // concatenation
        value.template destroy< std::shared_ptr<Verilogast::concatenation> > ();
        break;

      case 572: // conditional_expression
        value.template destroy< std::shared_ptr<Verilogast::conditional_expression> > ();
        break;

      case 420: // conditional_generate_construct
        value.template destroy< std::shared_ptr<Verilogast::conditional_generate_construct> > ();
        break;

      case 485: // conditional_statement
        value.template destroy< std::shared_ptr<Verilogast::conditional_statement> > ();
        break;

      case 456: // continuous_assign
        value.template destroy< std::shared_ptr<Verilogast::continuous_assign> > ();
        break;

      case 542: // controlled_reference_event
        value.template destroy< std::shared_ptr<Verilogast::controlled_reference_event> > ();
        break;

      case 558: // controlled_timing_check_event
        value.template destroy< std::shared_ptr<Verilogast::controlled_timing_check_event> > ();
        break;

      case 543: // data_event
        value.template destroy< std::shared_ptr<Verilogast::data_event> > ();
        break;

      case 317: // defparam_assignment
        value.template destroy< std::shared_ptr<Verilogast::defparam_assignment> > ();
        break;

      case 291: // delay2
      case 364: // delay2_opt
        value.template destroy< std::shared_ptr<Verilogast::delay2> > ();
        break;

      case 274: // delay3_opt
      case 290: // delay3
        value.template destroy< std::shared_ptr<Verilogast::delay3> > ();
        break;

      case 474: // delay_control
        value.template destroy< std::shared_ptr<Verilogast::delay_control> > ();
        break;

      case 463: // delay_or_event_control_opt
      case 475: // delay_or_event_control
        value.template destroy< std::shared_ptr<Verilogast::delay_or_event_control> > ();
        break;

      case 292: // delay_value
        value.template destroy< std::shared_ptr<Verilogast::delay_value> > ();
        break;

      case 528: // delayed_data_opt
      case 544: // delayed_data
        value.template destroy< std::shared_ptr<Verilogast::delayed_data> > ();
        break;

      case 527: // delayed_reference_opt
      case 545: // delayed_reference
        value.template destroy< std::shared_ptr<Verilogast::delayed_reference> > ();
        break;

      case 237: // description
        value.template destroy< std::shared_ptr<Verilogast::description> > ();
        break;

      case 326: // dimension
        value.template destroy< std::shared_ptr<Verilogast::dimension> > ();
        break;

      case 476: // disable_statement
        value.template destroy< std::shared_ptr<Verilogast::disable_statement> > ();
        break;

      case 536: // dollor_fullskew_timing_check
        value.template destroy< std::shared_ptr<Verilogast::dollor_fullskew_timing_check> > ();
        break;

      case 523: // dollor_hold_timing_check
        value.template destroy< std::shared_ptr<Verilogast::dollor_hold_timing_check> > ();
        break;

      case 540: // dollor_nochange_timing_check
        value.template destroy< std::shared_ptr<Verilogast::dollor_nochange_timing_check> > ();
        break;

      case 537: // dollor_period_timing_check
        value.template destroy< std::shared_ptr<Verilogast::dollor_period_timing_check> > ();
        break;

      case 529: // dollor_recovery_timing_check
        value.template destroy< std::shared_ptr<Verilogast::dollor_recovery_timing_check> > ();
        break;

      case 531: // dollor_recrem_timing_check
        value.template destroy< std::shared_ptr<Verilogast::dollor_recrem_timing_check> > ();
        break;

      case 530: // dollor_removal_timing_check
        value.template destroy< std::shared_ptr<Verilogast::dollor_removal_timing_check> > ();
        break;

      case 521: // dollor_setup_timing_check
        value.template destroy< std::shared_ptr<Verilogast::dollor_setup_timing_check> > ();
        break;

      case 524: // dollor_setuphold_timing_check
        value.template destroy< std::shared_ptr<Verilogast::dollor_setuphold_timing_check> > ();
        break;

      case 532: // dollor_skew_timing_check
        value.template destroy< std::shared_ptr<Verilogast::dollor_skew_timing_check> > ();
        break;

      case 533: // dollor_timeskew_timing_check
        value.template destroy< std::shared_ptr<Verilogast::dollor_timeskew_timing_check> > ();
        break;

      case 538: // dollor_width_timing_check
        value.template destroy< std::shared_ptr<Verilogast::dollor_width_timing_check> > ();
        break;

      case 276: // drive_strength_opt
      case 286: // drive_strength
        value.template destroy< std::shared_ptr<Verilogast::drive_strength> > ();
        break;

      case 561: // edge_control_specifier
        value.template destroy< std::shared_ptr<Verilogast::edge_control_specifier> > ();
        break;

      case 563: // edge_descriptor
        value.template destroy< std::shared_ptr<Verilogast::edge_descriptor> > ();
        break;

      case 452: // edge_indicator
        value.template destroy< std::shared_ptr<Verilogast::edge_indicator> > ();
        break;

      case 451: // edge_input_list
        value.template destroy< std::shared_ptr<Verilogast::edge_input_list> > ();
        break;

      case 512: // edge_sensitive_path_declaration
        value.template destroy< std::shared_ptr<Verilogast::edge_sensitive_path_declaration> > ();
        break;

      case 369: // enable_gate_instance
        value.template destroy< std::shared_ptr<Verilogast::enable_gate_instance> > ();
        break;

      case 546: // end_edge_offset
        value.template destroy< std::shared_ptr<Verilogast::end_edge_offset> > ();
        break;

      case 534: // event_based_flag_opt
      case 547: // event_based_flag
        value.template destroy< std::shared_ptr<Verilogast::event_based_flag> > ();
        break;

      case 477: // event_control
        value.template destroy< std::shared_ptr<Verilogast::event_control> > ();
        break;

      case 271: // event_declaration
        value.template destroy< std::shared_ptr<Verilogast::event_declaration> > ();
        break;

      case 479: // event_expression
        value.template destroy< std::shared_ptr<Verilogast::event_expression> > ();
        break;

      case 297: // event_identifier_dimension_list
        value.template destroy< std::shared_ptr<Verilogast::event_identifier_dimension_list> > ();
        break;

      case 478: // event_trigger
        value.template destroy< std::shared_ptr<Verilogast::event_trigger> > ();
        break;

      case 315: // equ1_expression_opt
      case 380: // enable_terminal
      case 381: // input_terminal
      case 382: // ncontrol_terminal
      case 383: // inout_terminal
      case 384: // output_terminal
      case 385: // pcontrol_terminal
      case 410: // expression_opt
      case 516: // data_source_expression
      case 557: // and3_timing_check_condition_opt
      case 571: // base_expression
      case 573: // dimension_expression
      case 574: // expression
      case 577: // width_expression
        value.template destroy< std::shared_ptr<Verilogast::expression> > ();
        break;

      case 515: // full_edge_sensitive_path_description
        value.template destroy< std::shared_ptr<Verilogast::full_edge_sensitive_path_description> > ();
        break;

      case 506: // full_path_description
        value.template destroy< std::shared_ptr<Verilogast::full_path_description> > ();
        break;

      case 568: // function_call
        value.template destroy< std::shared_ptr<Verilogast::function_call> > ();
        break;

      case 328: // function_declaration
        value.template destroy< std::shared_ptr<Verilogast::function_declaration> > ();
        break;

      case 331: // function_item_declaration
        value.template destroy< std::shared_ptr<Verilogast::function_item_declaration> > ();
        break;

      case 335: // function_range_or_type
        value.template destroy< std::shared_ptr<Verilogast::function_range_or_type> > ();
        break;

      case 355: // gate_instantiation
        value.template destroy< std::shared_ptr<Verilogast::gate_instantiation> > ();
        break;

      case 422: // else_generate_block_or_null_opt
      case 427: // generate_block
      case 429: // generate_block_or_null
        value.template destroy< std::shared_ptr<Verilogast::generate_block> > ();
        break;

      case 412: // generate_region
        value.template destroy< std::shared_ptr<Verilogast::generate_region> > ();
        break;

      case 414: // genvar_declaration
        value.template destroy< std::shared_ptr<Verilogast::genvar_declaration> > ();
        break;

      case 418: // genvar_initialization
        value.template destroy< std::shared_ptr<Verilogast::genvar_initialization> > ();
        break;

      case 419: // genvar_iteration
        value.template destroy< std::shared_ptr<Verilogast::genvar_iteration> > ();
        break;

      case 593: // hierarchical_identifier
        value.template destroy< std::shared_ptr<Verilogast::hierarchical_identifier> > ();
        break;

      case 428: // colon_generate_block_identifier_opt
      case 586: // attr_name
      case 587: // block_identifier
      case 588: // event_identifier
      case 589: // function_identifier
      case 590: // gate_instance_identifier
      case 591: // generate_block_identifier
      case 592: // genvar_identifier
      case 597: // identifier
      case 598: // input_port_identifier
      case 599: // module_instance_identifier
      case 600: // net_identifier
      case 601: // output_port_identifier
      case 602: // parameter_identifier
      case 603: // port_identifier
      case 604: // real_identifier
      case 605: // specparam_identifier
      case 607: // task_identifier
      case 608: // terminal_identifier
      case 609: // variable_identifier
        value.template destroy< std::shared_ptr<Verilogast::identifier> > ();
        break;

      case 595: // identifier_lsq_expression_rsq_opt
        value.template destroy< std::shared_ptr<Verilogast::identifier_lsq_expression_rsq> > ();
        break;

      case 421: // if_generate_construct
        value.template destroy< std::shared_ptr<Verilogast::if_generate_construct> > ();
        break;

      case 447: // init_val
        value.template destroy< std::shared_ptr<Verilogast::init_val> > ();
        break;

      case 460: // initial_construct
        value.template destroy< std::shared_ptr<Verilogast::initial_construct> > ();
        break;

      case 266: // inout_declaration
        value.template destroy< std::shared_ptr<Verilogast::inout_declaration> > ();
        break;

      case 268: // input_declaration
        value.template destroy< std::shared_ptr<Verilogast::input_declaration> > ();
        break;

      case 272: // integer_declaration
        value.template destroy< std::shared_ptr<Verilogast::integer_declaration> > ();
        break;

      case 510: // path_delay_value
      case 511: // list_of_path_delay_expressions
        value.template destroy< std::shared_ptr<Verilogast::list_of_path_delay_expressions> > ();
        break;

      case 406: // list_of_port_connections
        value.template destroy< std::shared_ptr<Verilogast::list_of_port_connections> > ();
        break;

      case 260: // local_parameter_declaration
        value.template destroy< std::shared_ptr<Verilogast::local_parameter_declaration> > ();
        break;

      case 417: // loop_generate_construct
        value.template destroy< std::shared_ptr<Verilogast::loop_generate_construct> > ();
        break;

      case 491: // loop_statement
        value.template destroy< std::shared_ptr<Verilogast::loop_statement> > ();
        break;

      case 322: // comma_error_limit_value_opt
      case 323: // error_limit_value
      case 324: // reject_limit_value
      case 325: // limit_value
      case 400: // ordered_parameter_assignment
      case 402: // mintypmax_expression_opt
      case 575: // mintypmax_expression
        value.template destroy< std::shared_ptr<Verilogast::mintypmax_expression> > ();
        break;

      case 238: // module_declaration
        value.template destroy< std::shared_ptr<Verilogast::module_declaration> > ();
        break;

      case 403: // module_instance
        value.template destroy< std::shared_ptr<Verilogast::module_instance> > ();
        break;

      case 393: // module_instantiation
        value.template destroy< std::shared_ptr<Verilogast::module_instantiation> > ();
        break;

      case 256: // module_item
      case 257: // non_port_module_item
      case 258: // module_or_generate_item
        value.template destroy< std::shared_ptr<Verilogast::module_item> > ();
        break;

      case 370: // mos_switch_instance
        value.template destroy< std::shared_ptr<Verilogast::mos_switch_instance> > ();
        break;

      case 567: // multiple_concatenation
        value.template destroy< std::shared_ptr<Verilogast::multiple_concatenation> > ();
        break;

      case 371: // n_input_gate_instance
        value.template destroy< std::shared_ptr<Verilogast::n_input_gate_instance> > ();
        break;

      case 372: // n_output_gate_instance
        value.template destroy< std::shared_ptr<Verilogast::n_output_gate_instance> > ();
        break;

      case 368: // name_of_gate_instance_opt
      case 377: // name_of_gate_instance
        value.template destroy< std::shared_ptr<Verilogast::name_of_gate_instance> > ();
        break;

      case 404: // name_of_module_instance_opt
      case 405: // name_of_module_instance
        value.template destroy< std::shared_ptr<Verilogast::name_of_module_instance> > ();
        break;

      case 401: // named_parameter_assignment
        value.template destroy< std::shared_ptr<Verilogast::named_parameter_assignment> > ();
        break;

      case 411: // named_port_connection
        value.template destroy< std::shared_ptr<Verilogast::named_port_connection> > ();
        break;

      case 459: // net_assignment
        value.template destroy< std::shared_ptr<Verilogast::net_assignment> > ();
        break;

      case 318: // net_decl_assignment
        value.template destroy< std::shared_ptr<Verilogast::net_decl_assignment> > ();
        break;

      case 273: // net_declaration
        value.template destroy< std::shared_ptr<Verilogast::net_declaration> > ();
        break;

      case 301: // net_identifier_dimension_list
        value.template destroy< std::shared_ptr<Verilogast::net_identifier_dimension_list> > ();
        break;

      case 579: // net_lvalue
        value.template destroy< std::shared_ptr<Verilogast::net_lvalue> > ();
        break;

      case 464: // nonblocking_assignment
        value.template destroy< std::shared_ptr<Verilogast::nonblocking_assignment> > ();
        break;

      case 522: // notifier_opt
      case 548: // notifier
        value.template destroy< std::shared_ptr<Verilogast::notifier> > ();
        break;

      case 581: // number
        value.template destroy< std::shared_ptr<Verilogast::number> > ();
        break;

      case 409: // ordered_port_connection
        value.template destroy< std::shared_ptr<Verilogast::ordered_port_connection> > ();
        break;

      case 269: // output_declaration
        value.template destroy< std::shared_ptr<Verilogast::output_declaration> > ();
        break;

      case 466: // par_block
        value.template destroy< std::shared_ptr<Verilogast::par_block> > ();
        break;

      case 513: // parallel_edge_sensitive_path_description
        value.template destroy< std::shared_ptr<Verilogast::parallel_edge_sensitive_path_description> > ();
        break;

      case 504: // parallel_path_description
        value.template destroy< std::shared_ptr<Verilogast::parallel_path_description> > ();
        break;

      case 319: // param_assignment
        value.template destroy< std::shared_ptr<Verilogast::param_assignment> > ();
        break;

      case 263: // parameter_declaration
        value.template destroy< std::shared_ptr<Verilogast::parameter_declaration> > ();
        break;

      case 395: // parameter_value_assignment_opt
      case 396: // parameter_value_assignment
      case 397: // list_of_parameter_assignments
        value.template destroy< std::shared_ptr<Verilogast::parameter_value_assignment> > ();
        break;

      case 375: // pass_enable_switch_instance
        value.template destroy< std::shared_ptr<Verilogast::pass_enable_switch_instance> > ();
        break;

      case 374: // pass_switch_instance
        value.template destroy< std::shared_ptr<Verilogast::pass_switch_instance> > ();
        break;

      case 502: // path_declaration
        value.template destroy< std::shared_ptr<Verilogast::path_declaration> > ();
        break;

      case 249: // port
        value.template destroy< std::shared_ptr<Verilogast::port> > ();
        break;

      case 255: // port_declaration
        value.template destroy< std::shared_ptr<Verilogast::port_declaration> > ();
        break;

      case 250: // port_expression_opt
      case 251: // port_expression
        value.template destroy< std::shared_ptr<Verilogast::port_expression> > ();
        break;

      case 314: // port_identifier_equ1_expression_opt
        value.template destroy< std::shared_ptr<Verilogast::port_identifier_equ1_expression_opt> > ();
        break;

      case 253: // port_reference
        value.template destroy< std::shared_ptr<Verilogast::port_reference> > ();
        break;

      case 578: // primary
        value.template destroy< std::shared_ptr<Verilogast::primary> > ();
        break;

      case 465: // procedural_continuous_assignments
        value.template destroy< std::shared_ptr<Verilogast::procedural_continuous_assignments> > ();
        break;

      case 482: // procedural_timing_control
        value.template destroy< std::shared_ptr<Verilogast::procedural_timing_control> > ();
        break;

      case 483: // procedural_timing_control_statement
        value.template destroy< std::shared_ptr<Verilogast::procedural_timing_control_statement> > ();
        break;

      case 376: // pull_gate_instance
        value.template destroy< std::shared_ptr<Verilogast::pull_gate_instance> > ();
        break;

      case 365: // pulldown_strength_opt
      case 378: // pulldown_strength
        value.template destroy< std::shared_ptr<Verilogast::pulldown_strength> > ();
        break;

      case 366: // pullup_strength_opt
      case 379: // pullup_strength
        value.template destroy< std::shared_ptr<Verilogast::pullup_strength> > ();
        break;

      case 500: // pulsestyle_declaration
        value.template destroy< std::shared_ptr<Verilogast::pulsestyle_declaration> > ();
        break;

      case 262: // range_opt
      case 327: // range
        value.template destroy< std::shared_ptr<Verilogast::range> > ();
        break;

      case 254: // lsquare_range_expression_rsquare_opt
      case 576: // lsquare_range_expression_rsquare
        value.template destroy< std::shared_ptr<Verilogast::range_expression> > ();
        break;

      case 277: // real_declaration
        value.template destroy< std::shared_ptr<Verilogast::real_declaration> > ();
        break;

      case 283: // real_type
        value.template destroy< std::shared_ptr<Verilogast::real_type> > ();
        break;

      case 278: // realtime_declaration
        value.template destroy< std::shared_ptr<Verilogast::realtime_declaration> > ();
        break;

      case 549: // reference_event
        value.template destroy< std::shared_ptr<Verilogast::reference_event> > ();
        break;

      case 279: // reg_declaration
        value.template destroy< std::shared_ptr<Verilogast::reg_declaration> > ();
        break;

      case 535: // remain_active_flag_opt
      case 550: // remain_active_flag
        value.template destroy< std::shared_ptr<Verilogast::remain_active_flag> > ();
        break;

      case 468: // seq_block
        value.template destroy< std::shared_ptr<Verilogast::seq_block> > ();
        break;

      case 449: // seq_input_list
        value.template destroy< std::shared_ptr<Verilogast::seq_input_list> > ();
        break;

      case 443: // sequential_body
        value.template destroy< std::shared_ptr<Verilogast::sequential_body> > ();
        break;

      case 448: // sequential_entry
        value.template destroy< std::shared_ptr<Verilogast::sequential_entry> > ();
        break;

      case 501: // showcancelled_declaration
        value.template destroy< std::shared_ptr<Verilogast::showcancelled_declaration> > ();
        break;

      case 503: // simple_path_declaration
        value.template destroy< std::shared_ptr<Verilogast::simple_path_declaration> > ();
        break;

      case 497: // specify_block
        value.template destroy< std::shared_ptr<Verilogast::specify_block> > ();
        break;

      case 509: // specify_inout_terminal_descriptor
        value.template destroy< std::shared_ptr<Verilogast::specify_inout_terminal_descriptor> > ();
        break;

      case 499: // specify_item
        value.template destroy< std::shared_ptr<Verilogast::specify_item> > ();
        break;

      case 560: // specify_terminal_descriptor
        value.template destroy< std::shared_ptr<Verilogast::specify_terminal_descriptor> > ();
        break;

      case 320: // specparam_assignment
      case 321: // pulse_control_specparam
        value.template destroy< std::shared_ptr<Verilogast::specparam_assignment> > ();
        break;

      case 264: // specparam_declaration
        value.template destroy< std::shared_ptr<Verilogast::specparam_declaration> > ();
        break;

      case 525: // stamptime_condition_opt
      case 551: // stamptime_condition
        value.template destroy< std::shared_ptr<Verilogast::stamptime_condition> > ();
        break;

      case 552: // start_edge_offset
        value.template destroy< std::shared_ptr<Verilogast::start_edge_offset> > ();
        break;

      case 518: // state_dependent_path_declaration
        value.template destroy< std::shared_ptr<Verilogast::state_dependent_path_declaration> > ();
        break;

      case 471: // statement
      case 472: // statement_or_null
      case 473: // function_statement
      case 486: // else_statement_or_null_opt
        value.template destroy< std::shared_ptr<Verilogast::statement> > ();
        break;

      case 470: // statement_or_block_item
        value.template destroy< std::shared_ptr<Verilogast::statement_or_block_item> > ();
        break;

      case 582: // string_typedef
        value.template destroy< std::shared_ptr<Verilogast::string_typedef> > ();
        break;

      case 569: // system_function_call
        value.template destroy< std::shared_ptr<Verilogast::system_function_call> > ();
        break;

      case 606: // system_function_identifier
        value.template destroy< std::shared_ptr<Verilogast::system_function_identifier> > ();
        break;

      case 492: // system_task_enable
        value.template destroy< std::shared_ptr<Verilogast::system_task_enable> > ();
        break;

      case 520: // system_timing_check
        value.template destroy< std::shared_ptr<Verilogast::system_timing_check> > ();
        break;

      case 336: // task_declaration
        value.template destroy< std::shared_ptr<Verilogast::task_declaration> > ();
        break;

      case 496: // task_enable
        value.template destroy< std::shared_ptr<Verilogast::task_enable> > ();
        break;

      case 338: // task_item_declaration
        value.template destroy< std::shared_ptr<Verilogast::task_item_declaration> > ();
        break;

      case 341: // task_port_item
        value.template destroy< std::shared_ptr<Verilogast::task_port_item> > ();
        break;

      case 345: // tf_inout_declaration
        value.template destroy< std::shared_ptr<Verilogast::tf_inout_declaration> > ();
        break;

      case 342: // tf_input_declaration
        value.template destroy< std::shared_ptr<Verilogast::tf_input_declaration> > ();
        break;

      case 347: // tf_io_declaration_gen
        value.template destroy< std::shared_ptr<Verilogast::tf_io_declaration_gen> > ();
        break;

      case 344: // tf_output_declaration
        value.template destroy< std::shared_ptr<Verilogast::tf_output_declaration> > ();
        break;

      case 539: // threshold_opt
      case 553: // threshold
        value.template destroy< std::shared_ptr<Verilogast::threshold> > ();
        break;

      case 280: // time_declaration
        value.template destroy< std::shared_ptr<Verilogast::time_declaration> > ();
        break;

      case 555: // timing_check_event
        value.template destroy< std::shared_ptr<Verilogast::timing_check_event> > ();
        break;

      case 556: // timing_check_event_control_opt
      case 559: // timing_check_event_control
        value.template destroy< std::shared_ptr<Verilogast::timing_check_event_control> > ();
        break;

      case 554: // timing_check_limit
        value.template destroy< std::shared_ptr<Verilogast::timing_check_limit> > ();
        break;

      case 442: // udp_body
        value.template destroy< std::shared_ptr<Verilogast::udp_body> > ();
        break;

      case 430: // udp_declaration
        value.template destroy< std::shared_ptr<Verilogast::udp_declaration> > ();
        break;

      case 434: // udp_declaration_port_list
        value.template destroy< std::shared_ptr<Verilogast::udp_declaration_port_list> > ();
        break;

      case 444: // udp_initial_statement_opt
      case 446: // udp_initial_statement
        value.template destroy< std::shared_ptr<Verilogast::udp_initial_statement> > ();
        break;

      case 438: // udp_input_declaration
        value.template destroy< std::shared_ptr<Verilogast::udp_input_declaration> > ();
        break;

      case 439: // udp_input_declaration_sigular
        value.template destroy< std::shared_ptr<Verilogast::udp_input_declaration_sigular> > ();
        break;

      case 437: // udp_output_declaration
        value.template destroy< std::shared_ptr<Verilogast::udp_output_declaration> > ();
        break;

      case 436: // udp_port_declaration
        value.template destroy< std::shared_ptr<Verilogast::udp_port_declaration> > ();
        break;

      case 432: // udp_port_list
        value.template destroy< std::shared_ptr<Verilogast::udp_port_list> > ();
        break;

      case 441: // udp_reg_declaration
        value.template destroy< std::shared_ptr<Verilogast::udp_reg_declaration> > ();
        break;

      case 285: // variable_type
        value.template destroy< std::shared_ptr<Verilogast::variable_type> > ();
        break;

      case 484: // wait_statement
        value.template destroy< std::shared_ptr<Verilogast::wait_statement> > ();
        break;

      case 450: // level_symbol_list
        value.template destroy< std::shared_ptr<std::list<Verilogast::level_symbol>> > ();
        break;

      case 584: // comma_attr_spec_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::attr_spec>>> > ();
        break;

      case 241: // attribute_instance_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::attribute_instance>>> > ();
        break;

      case 332: // function_port_list
      case 334: // comma_attribute_instance_list_tf_input_declaration_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::attribute_instance_list_tf_input_declaration>>> > ();
        break;

      case 351: // list_of_block_real_identifiers
      case 352: // comma_block_real_type_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::block_real_type>>> > ();
        break;

      case 349: // list_of_block_variable_identifiers
      case 350: // comma_block_variable_type_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::block_variable_type>>> > ();
        break;

      case 424: // case_generate_item_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::case_generate_item>>> > ();
        break;

      case 488: // case_item_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::case_item>>> > ();
        break;

      case 360: // comma_cmos_switch_instance_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::cmos_switch_instance>>> > ();
        break;

      case 259: // parameter_override
      case 293: // list_of_defparam_assignments
      case 294: // comma_defparam_assignment_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::defparam_assignment>>> > ();
        break;

      case 235: // source_text
      case 236: // description_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::description>>> > ();
        break;

      case 284: // dimension_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::dimension>>> > ();
        break;

      case 562: // comma_edge_descriptor_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::edge_descriptor>>> > ();
        break;

      case 361: // comma_enable_gate_instance_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::enable_gate_instance>>> > ();
        break;

      case 480: // event_expression_orcomma_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::event_expression>>> > ();
        break;

      case 295: // list_of_event_identifiers
      case 296: // comma_event_identifier_dimension_list_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::event_identifier_dimension_list>>> > ();
        break;

      case 373: // comma_output_terminal_list
      case 455: // comma_input_terminal_list
      case 490: // comma_expression_list
      case 493: // lp_expression_opt_comma_expression_list_rp_opt
      case 494: // lp_expression_opt_comma_expression_list_rp
      case 495: // comma_expression_opt_list
      case 570: // lp_expression_comma_expression_list_rp_op
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::expression>>> > ();
        break;

      case 329: // function_item_declaration_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::function_item_declaration>>> > ();
        break;

      case 305: // list_of_port_identifiers
      case 306: // comma_port_identifier_list
      case 415: // list_of_genvar_identifiers
      case 416: // comma_genvar_identifier_list
      case 433: // comma_input_port_identifier_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::identifier>>> > ();
        break;

      case 594: // identifier_lsq_expression_rsq_opt_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::identifier_lsq_expression_rsq>>> > ();
        break;

      case 398: // comma_ordered_parameter_assignment_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::mintypmax_expression>>> > ();
        break;

      case 394: // comma_module_instance_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::module_instance>>> > ();
        break;

      case 243: // module_item_list
      case 413: // module_or_generate_item_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::module_item>>> > ();
        break;

      case 362: // comma_mos_switch_instance_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::mos_switch_instance>>> > ();
        break;

      case 363: // comma_n_input_gate_instance_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::n_input_gate_instance>>> > ();
        break;

      case 356: // comma_n_output_gate_instance_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::n_output_gate_instance>>> > ();
        break;

      case 399: // comma_named_parameter_assignment_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::named_parameter_assignment>>> > ();
        break;

      case 408: // comma_named_port_connection_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::named_port_connection>>> > ();
        break;

      case 457: // list_of_net_assignments
      case 458: // comma_net_assignment_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::net_assignment>>> > ();
        break;

      case 298: // list_of_net_decl_assignments
      case 299: // comma_net_decl_assignment_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::net_decl_assignment>>> > ();
        break;

      case 300: // list_of_net_identifiers
      case 302: // comma_net_identifier_dimension_list_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::net_identifier_dimension_list>>> > ();
        break;

      case 580: // comma_net_lvalue_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::net_lvalue>>> > ();
        break;

      case 407: // comma_ordered_port_connection_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::ordered_port_connection>>> > ();
        break;

      case 303: // list_of_param_assignments
      case 304: // comma_param_assignment_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::param_assignment>>> > ();
        break;

      case 242: // module_parameter_port_list_opt
      case 245: // module_parameter_port_list
      case 246: // comma_parameter_declaration_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::parameter_declaration>>> > ();
        break;

      case 357: // comma_pass_enable_switch_instance_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::pass_enable_switch_instance>>> > ();
        break;

      case 358: // comma_pass_switch_instance_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::pass_switch_instance>>> > ();
        break;

      case 247: // list_of_ports
      case 248: // comma_port_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::port>>> > ();
        break;

      case 239: // list_of_port_declarations
      case 240: // comma_port_declaration_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::port_declaration>>> > ();
        break;

      case 313: // list_of_variable_port_identifiers
      case 316: // comma_port_identifier_equ1_expression_opt_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::port_identifier_equ1_expression_opt>>> > ();
        break;

      case 252: // comma_port_reference_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::port_reference>>> > ();
        break;

      case 359: // comma_pull_gate_instance_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::pull_gate_instance>>> > ();
        break;

      case 596: // lsquare_range_expression_rsquare_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::range_expression>>> > ();
        break;

      case 307: // list_of_real_identifiers
      case 308: // comma_real_type_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::real_type>>> > ();
        break;

      case 445: // sequential_entry_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::sequential_entry>>> > ();
        break;

      case 507: // list_of_path_inouts
      case 508: // comma_specify_inout_terminal_descriptor_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::specify_inout_terminal_descriptor>>> > ();
        break;

      case 498: // specify_item_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::specify_item>>> > ();
        break;

      case 309: // list_of_specparam_assignments
      case 310: // comma_specparam_assignment_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::specparam_assignment>>> > ();
        break;

      case 469: // statement_or_block_item_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::statement_or_block_item>>> > ();
        break;

      case 337: // task_item_declaration_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::task_item_declaration>>> > ();
        break;

      case 339: // task_port_list
      case 340: // comma_task_port_item_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::task_port_item>>> > ();
        break;

      case 435: // comma_udp_input_declaration_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::udp_input_declaration_sigular>>> > ();
        break;

      case 431: // udp_port_declaration_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::udp_port_declaration>>> > ();
        break;

      case 311: // list_of_variable_identifiers
      case 312: // comma_variable_type_list
        value.template destroy< std::shared_ptr<std::list<std::shared_ptr<Verilogast::variable_type>>> > ();
        break;

      case 223: // REAL_NUMBER
      case 224: // STRING
      case 225: // ESCAPED_IDENTIFIER
      case 226: // SIMPLE_IDENTIFIER
      case 227: // SYSTEM_TASK_FUNCTION_IDENTIFIER
        value.template destroy< std::string > ();
        break;

      case 219: // UNSIGNED_NUMBER_size
      case 220: // OCTAL_NUMBER
      case 221: // BINARY_NUMBER
      case 222: // HEX_NUMBER
        value.template destroy< std::tuple<unsigned int,std::string,std::string> > ();
        break;

      case 218: // UNSIGNED_NUMBER
        value.template destroy< unsigned int > ();
        break;

      default:
        break;
    }

  }

  template <typename Base>
  inline
  void
  verilog_parser::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move(s);
      switch (this->type_get ())
    {
      case 330: // automatic_opt
        value.move< Verilogast::automatic > (s.value);
        break;

      case 289: // charge_strength
        value.move< Verilogast::charge_strength > (s.value);
        break;

      case 386: // cmos_switchtype
        value.move< Verilogast::cmos_switchtype > (s.value);
        break;

      case 514: // edge_identifier_opt
      case 517: // edge_identifier
        value.move< Verilogast::edge_identifier > (s.value);
        break;

      case 453: // edge_symbol
        value.move< Verilogast::edge_symbol > (s.value);
        break;

      case 387: // enable_gatetype
        value.move< Verilogast::enable_gatetype > (s.value);
        break;

      case 270: // io_type
        value.move< Verilogast::io_type > (s.value);
        break;

      case 454: // level_symbol
        value.move< Verilogast::level_symbol > (s.value);
        break;

      case 388: // mos_switchtype
        value.move< Verilogast::mos_switchtype > (s.value);
        break;

      case 389: // n_input_gatetype
        value.move< Verilogast::n_input_gatetype > (s.value);
        break;

      case 390: // n_output_gatetype
        value.move< Verilogast::n_output_gatetype > (s.value);
        break;

      case 267: // net_type_opt
      case 281: // net_type
        value.move< Verilogast::net_type > (s.value);
        break;

      case 282: // output_variable_type
        value.move< Verilogast::output_variable_type > (s.value);
        break;

      case 265: // parameter_type
        value.move< Verilogast::parameter_type > (s.value);
        break;

      case 391: // pass_en_switchtype
        value.move< Verilogast::pass_en_switchtype > (s.value);
        break;

      case 392: // pass_switchtype
        value.move< Verilogast::pass_switchtype > (s.value);
        break;

      case 505: // polarity_operator_opt
      case 519: // polarity_operator
        value.move< Verilogast::polarity_operator > (s.value);
        break;

      case 343: // reg_opt
        value.move< Verilogast::reg > (s.value);
        break;

      case 261: // signed_opt
        value.move< Verilogast::signedType > (s.value);
        break;

      case 287: // strength0
      case 288: // strength1
        value.move< Verilogast::strength > (s.value);
        break;

      case 346: // task_port_type
        value.move< Verilogast::task_port_type > (s.value);
        break;

      case 275: // vectored_scalared_opt
        value.move< Verilogast::vectored_scalared > (s.value);
        break;

      case 565: // z_or_x
        value.move< Verilogast::z_or_x > (s.value);
        break;

      case 564: // zero_or_one
        value.move< Verilogast::zero_or_one > (s.value);
        break;

      case 244: // module_keyword
      case 440: // key_input_opt
      case 481: // or_comma
        value.move< int > (s.value);
        break;

      case 461: // always_construct
        value.move< std::shared_ptr<Verilogast::always_construct> > (s.value);
        break;

      case 585: // attr_spec
        value.move< std::shared_ptr<Verilogast::attr_spec> > (s.value);
        break;

      case 583: // attribute_instance
        value.move< std::shared_ptr<Verilogast::attribute_instance> > (s.value);
        break;

      case 333: // attribute_instance_list_tf_input_declaration
        value.move< std::shared_ptr<Verilogast::attribute_instance_list_tf_input_declaration> > (s.value);
        break;

      case 348: // block_item_declaration
        value.move< std::shared_ptr<Verilogast::block_item_declaration> > (s.value);
        break;

      case 354: // block_real_type
        value.move< std::shared_ptr<Verilogast::block_real_type> > (s.value);
        break;

      case 353: // block_variable_type
        value.move< std::shared_ptr<Verilogast::block_variable_type> > (s.value);
        break;

      case 462: // blocking_assignment
        value.move< std::shared_ptr<Verilogast::blocking_assignment> > (s.value);
        break;

      case 423: // case_generate_construct
        value.move< std::shared_ptr<Verilogast::case_generate_construct> > (s.value);
        break;

      case 425: // case_generate_item
        value.move< std::shared_ptr<Verilogast::case_generate_item> > (s.value);
        break;

      case 489: // case_item
        value.move< std::shared_ptr<Verilogast::case_item> > (s.value);
        break;

      case 487: // case_statement
        value.move< std::shared_ptr<Verilogast::case_statement> > (s.value);
        break;

      case 526: // checktime_condition_opt
      case 541: // checktime_condition
        value.move< std::shared_ptr<Verilogast::checktime_condition> > (s.value);
        break;

      case 367: // cmos_switch_instance
        value.move< std::shared_ptr<Verilogast::cmos_switch_instance> > (s.value);
        break;

      case 467: // colon_block_identifier_opt
        value.move< std::shared_ptr<Verilogast::colon_block_identifier> > (s.value);
        break;

      case 426: // colon_opt
        value.move< std::shared_ptr<Verilogast::colon_opt> > (s.value);
        break;

      case 566: // concatenation
        value.move< std::shared_ptr<Verilogast::concatenation> > (s.value);
        break;

      case 572: // conditional_expression
        value.move< std::shared_ptr<Verilogast::conditional_expression> > (s.value);
        break;

      case 420: // conditional_generate_construct
        value.move< std::shared_ptr<Verilogast::conditional_generate_construct> > (s.value);
        break;

      case 485: // conditional_statement
        value.move< std::shared_ptr<Verilogast::conditional_statement> > (s.value);
        break;

      case 456: // continuous_assign
        value.move< std::shared_ptr<Verilogast::continuous_assign> > (s.value);
        break;

      case 542: // controlled_reference_event
        value.move< std::shared_ptr<Verilogast::controlled_reference_event> > (s.value);
        break;

      case 558: // controlled_timing_check_event
        value.move< std::shared_ptr<Verilogast::controlled_timing_check_event> > (s.value);
        break;

      case 543: // data_event
        value.move< std::shared_ptr<Verilogast::data_event> > (s.value);
        break;

      case 317: // defparam_assignment
        value.move< std::shared_ptr<Verilogast::defparam_assignment> > (s.value);
        break;

      case 291: // delay2
      case 364: // delay2_opt
        value.move< std::shared_ptr<Verilogast::delay2> > (s.value);
        break;

      case 274: // delay3_opt
      case 290: // delay3
        value.move< std::shared_ptr<Verilogast::delay3> > (s.value);
        break;

      case 474: // delay_control
        value.move< std::shared_ptr<Verilogast::delay_control> > (s.value);
        break;

      case 463: // delay_or_event_control_opt
      case 475: // delay_or_event_control
        value.move< std::shared_ptr<Verilogast::delay_or_event_control> > (s.value);
        break;

      case 292: // delay_value
        value.move< std::shared_ptr<Verilogast::delay_value> > (s.value);
        break;

      case 528: // delayed_data_opt
      case 544: // delayed_data
        value.move< std::shared_ptr<Verilogast::delayed_data> > (s.value);
        break;

      case 527: // delayed_reference_opt
      case 545: // delayed_reference
        value.move< std::shared_ptr<Verilogast::delayed_reference> > (s.value);
        break;

      case 237: // description
        value.move< std::shared_ptr<Verilogast::description> > (s.value);
        break;

      case 326: // dimension
        value.move< std::shared_ptr<Verilogast::dimension> > (s.value);
        break;

      case 476: // disable_statement
        value.move< std::shared_ptr<Verilogast::disable_statement> > (s.value);
        break;

      case 536: // dollor_fullskew_timing_check
        value.move< std::shared_ptr<Verilogast::dollor_fullskew_timing_check> > (s.value);
        break;

      case 523: // dollor_hold_timing_check
        value.move< std::shared_ptr<Verilogast::dollor_hold_timing_check> > (s.value);
        break;

      case 540: // dollor_nochange_timing_check
        value.move< std::shared_ptr<Verilogast::dollor_nochange_timing_check> > (s.value);
        break;

      case 537: // dollor_period_timing_check
        value.move< std::shared_ptr<Verilogast::dollor_period_timing_check> > (s.value);
        break;

      case 529: // dollor_recovery_timing_check
        value.move< std::shared_ptr<Verilogast::dollor_recovery_timing_check> > (s.value);
        break;

      case 531: // dollor_recrem_timing_check
        value.move< std::shared_ptr<Verilogast::dollor_recrem_timing_check> > (s.value);
        break;

      case 530: // dollor_removal_timing_check
        value.move< std::shared_ptr<Verilogast::dollor_removal_timing_check> > (s.value);
        break;

      case 521: // dollor_setup_timing_check
        value.move< std::shared_ptr<Verilogast::dollor_setup_timing_check> > (s.value);
        break;

      case 524: // dollor_setuphold_timing_check
        value.move< std::shared_ptr<Verilogast::dollor_setuphold_timing_check> > (s.value);
        break;

      case 532: // dollor_skew_timing_check
        value.move< std::shared_ptr<Verilogast::dollor_skew_timing_check> > (s.value);
        break;

      case 533: // dollor_timeskew_timing_check
        value.move< std::shared_ptr<Verilogast::dollor_timeskew_timing_check> > (s.value);
        break;

      case 538: // dollor_width_timing_check
        value.move< std::shared_ptr<Verilogast::dollor_width_timing_check> > (s.value);
        break;

      case 276: // drive_strength_opt
      case 286: // drive_strength
        value.move< std::shared_ptr<Verilogast::drive_strength> > (s.value);
        break;

      case 561: // edge_control_specifier
        value.move< std::shared_ptr<Verilogast::edge_control_specifier> > (s.value);
        break;

      case 563: // edge_descriptor
        value.move< std::shared_ptr<Verilogast::edge_descriptor> > (s.value);
        break;

      case 452: // edge_indicator
        value.move< std::shared_ptr<Verilogast::edge_indicator> > (s.value);
        break;

      case 451: // edge_input_list
        value.move< std::shared_ptr<Verilogast::edge_input_list> > (s.value);
        break;

      case 512: // edge_sensitive_path_declaration
        value.move< std::shared_ptr<Verilogast::edge_sensitive_path_declaration> > (s.value);
        break;

      case 369: // enable_gate_instance
        value.move< std::shared_ptr<Verilogast::enable_gate_instance> > (s.value);
        break;

      case 546: // end_edge_offset
        value.move< std::shared_ptr<Verilogast::end_edge_offset> > (s.value);
        break;

      case 534: // event_based_flag_opt
      case 547: // event_based_flag
        value.move< std::shared_ptr<Verilogast::event_based_flag> > (s.value);
        break;

      case 477: // event_control
        value.move< std::shared_ptr<Verilogast::event_control> > (s.value);
        break;

      case 271: // event_declaration
        value.move< std::shared_ptr<Verilogast::event_declaration> > (s.value);
        break;

      case 479: // event_expression
        value.move< std::shared_ptr<Verilogast::event_expression> > (s.value);
        break;

      case 297: // event_identifier_dimension_list
        value.move< std::shared_ptr<Verilogast::event_identifier_dimension_list> > (s.value);
        break;

      case 478: // event_trigger
        value.move< std::shared_ptr<Verilogast::event_trigger> > (s.value);
        break;

      case 315: // equ1_expression_opt
      case 380: // enable_terminal
      case 381: // input_terminal
      case 382: // ncontrol_terminal
      case 383: // inout_terminal
      case 384: // output_terminal
      case 385: // pcontrol_terminal
      case 410: // expression_opt
      case 516: // data_source_expression
      case 557: // and3_timing_check_condition_opt
      case 571: // base_expression
      case 573: // dimension_expression
      case 574: // expression
      case 577: // width_expression
        value.move< std::shared_ptr<Verilogast::expression> > (s.value);
        break;

      case 515: // full_edge_sensitive_path_description
        value.move< std::shared_ptr<Verilogast::full_edge_sensitive_path_description> > (s.value);
        break;

      case 506: // full_path_description
        value.move< std::shared_ptr<Verilogast::full_path_description> > (s.value);
        break;

      case 568: // function_call
        value.move< std::shared_ptr<Verilogast::function_call> > (s.value);
        break;

      case 328: // function_declaration
        value.move< std::shared_ptr<Verilogast::function_declaration> > (s.value);
        break;

      case 331: // function_item_declaration
        value.move< std::shared_ptr<Verilogast::function_item_declaration> > (s.value);
        break;

      case 335: // function_range_or_type
        value.move< std::shared_ptr<Verilogast::function_range_or_type> > (s.value);
        break;

      case 355: // gate_instantiation
        value.move< std::shared_ptr<Verilogast::gate_instantiation> > (s.value);
        break;

      case 422: // else_generate_block_or_null_opt
      case 427: // generate_block
      case 429: // generate_block_or_null
        value.move< std::shared_ptr<Verilogast::generate_block> > (s.value);
        break;

      case 412: // generate_region
        value.move< std::shared_ptr<Verilogast::generate_region> > (s.value);
        break;

      case 414: // genvar_declaration
        value.move< std::shared_ptr<Verilogast::genvar_declaration> > (s.value);
        break;

      case 418: // genvar_initialization
        value.move< std::shared_ptr<Verilogast::genvar_initialization> > (s.value);
        break;

      case 419: // genvar_iteration
        value.move< std::shared_ptr<Verilogast::genvar_iteration> > (s.value);
        break;

      case 593: // hierarchical_identifier
        value.move< std::shared_ptr<Verilogast::hierarchical_identifier> > (s.value);
        break;

      case 428: // colon_generate_block_identifier_opt
      case 586: // attr_name
      case 587: // block_identifier
      case 588: // event_identifier
      case 589: // function_identifier
      case 590: // gate_instance_identifier
      case 591: // generate_block_identifier
      case 592: // genvar_identifier
      case 597: // identifier
      case 598: // input_port_identifier
      case 599: // module_instance_identifier
      case 600: // net_identifier
      case 601: // output_port_identifier
      case 602: // parameter_identifier
      case 603: // port_identifier
      case 604: // real_identifier
      case 605: // specparam_identifier
      case 607: // task_identifier
      case 608: // terminal_identifier
      case 609: // variable_identifier
        value.move< std::shared_ptr<Verilogast::identifier> > (s.value);
        break;

      case 595: // identifier_lsq_expression_rsq_opt
        value.move< std::shared_ptr<Verilogast::identifier_lsq_expression_rsq> > (s.value);
        break;

      case 421: // if_generate_construct
        value.move< std::shared_ptr<Verilogast::if_generate_construct> > (s.value);
        break;

      case 447: // init_val
        value.move< std::shared_ptr<Verilogast::init_val> > (s.value);
        break;

      case 460: // initial_construct
        value.move< std::shared_ptr<Verilogast::initial_construct> > (s.value);
        break;

      case 266: // inout_declaration
        value.move< std::shared_ptr<Verilogast::inout_declaration> > (s.value);
        break;

      case 268: // input_declaration
        value.move< std::shared_ptr<Verilogast::input_declaration> > (s.value);
        break;

      case 272: // integer_declaration
        value.move< std::shared_ptr<Verilogast::integer_declaration> > (s.value);
        break;

      case 510: // path_delay_value
      case 511: // list_of_path_delay_expressions
        value.move< std::shared_ptr<Verilogast::list_of_path_delay_expressions> > (s.value);
        break;

      case 406: // list_of_port_connections
        value.move< std::shared_ptr<Verilogast::list_of_port_connections> > (s.value);
        break;

      case 260: // local_parameter_declaration
        value.move< std::shared_ptr<Verilogast::local_parameter_declaration> > (s.value);
        break;

      case 417: // loop_generate_construct
        value.move< std::shared_ptr<Verilogast::loop_generate_construct> > (s.value);
        break;

      case 491: // loop_statement
        value.move< std::shared_ptr<Verilogast::loop_statement> > (s.value);
        break;

      case 322: // comma_error_limit_value_opt
      case 323: // error_limit_value
      case 324: // reject_limit_value
      case 325: // limit_value
      case 400: // ordered_parameter_assignment
      case 402: // mintypmax_expression_opt
      case 575: // mintypmax_expression
        value.move< std::shared_ptr<Verilogast::mintypmax_expression> > (s.value);
        break;

      case 238: // module_declaration
        value.move< std::shared_ptr<Verilogast::module_declaration> > (s.value);
        break;

      case 403: // module_instance
        value.move< std::shared_ptr<Verilogast::module_instance> > (s.value);
        break;

      case 393: // module_instantiation
        value.move< std::shared_ptr<Verilogast::module_instantiation> > (s.value);
        break;

      case 256: // module_item
      case 257: // non_port_module_item
      case 258: // module_or_generate_item
        value.move< std::shared_ptr<Verilogast::module_item> > (s.value);
        break;

      case 370: // mos_switch_instance
        value.move< std::shared_ptr<Verilogast::mos_switch_instance> > (s.value);
        break;

      case 567: // multiple_concatenation
        value.move< std::shared_ptr<Verilogast::multiple_concatenation> > (s.value);
        break;

      case 371: // n_input_gate_instance
        value.move< std::shared_ptr<Verilogast::n_input_gate_instance> > (s.value);
        break;

      case 372: // n_output_gate_instance
        value.move< std::shared_ptr<Verilogast::n_output_gate_instance> > (s.value);
        break;

      case 368: // name_of_gate_instance_opt
      case 377: // name_of_gate_instance
        value.move< std::shared_ptr<Verilogast::name_of_gate_instance> > (s.value);
        break;

      case 404: // name_of_module_instance_opt
      case 405: // name_of_module_instance
        value.move< std::shared_ptr<Verilogast::name_of_module_instance> > (s.value);
        break;

      case 401: // named_parameter_assignment
        value.move< std::shared_ptr<Verilogast::named_parameter_assignment> > (s.value);
        break;

      case 411: // named_port_connection
        value.move< std::shared_ptr<Verilogast::named_port_connection> > (s.value);
        break;

      case 459: // net_assignment
        value.move< std::shared_ptr<Verilogast::net_assignment> > (s.value);
        break;

      case 318: // net_decl_assignment
        value.move< std::shared_ptr<Verilogast::net_decl_assignment> > (s.value);
        break;

      case 273: // net_declaration
        value.move< std::shared_ptr<Verilogast::net_declaration> > (s.value);
        break;

      case 301: // net_identifier_dimension_list
        value.move< std::shared_ptr<Verilogast::net_identifier_dimension_list> > (s.value);
        break;

      case 579: // net_lvalue
        value.move< std::shared_ptr<Verilogast::net_lvalue> > (s.value);
        break;

      case 464: // nonblocking_assignment
        value.move< std::shared_ptr<Verilogast::nonblocking_assignment> > (s.value);
        break;

      case 522: // notifier_opt
      case 548: // notifier
        value.move< std::shared_ptr<Verilogast::notifier> > (s.value);
        break;

      case 581: // number
        value.move< std::shared_ptr<Verilogast::number> > (s.value);
        break;

      case 409: // ordered_port_connection
        value.move< std::shared_ptr<Verilogast::ordered_port_connection> > (s.value);
        break;

      case 269: // output_declaration
        value.move< std::shared_ptr<Verilogast::output_declaration> > (s.value);
        break;

      case 466: // par_block
        value.move< std::shared_ptr<Verilogast::par_block> > (s.value);
        break;

      case 513: // parallel_edge_sensitive_path_description
        value.move< std::shared_ptr<Verilogast::parallel_edge_sensitive_path_description> > (s.value);
        break;

      case 504: // parallel_path_description
        value.move< std::shared_ptr<Verilogast::parallel_path_description> > (s.value);
        break;

      case 319: // param_assignment
        value.move< std::shared_ptr<Verilogast::param_assignment> > (s.value);
        break;

      case 263: // parameter_declaration
        value.move< std::shared_ptr<Verilogast::parameter_declaration> > (s.value);
        break;

      case 395: // parameter_value_assignment_opt
      case 396: // parameter_value_assignment
      case 397: // list_of_parameter_assignments
        value.move< std::shared_ptr<Verilogast::parameter_value_assignment> > (s.value);
        break;

      case 375: // pass_enable_switch_instance
        value.move< std::shared_ptr<Verilogast::pass_enable_switch_instance> > (s.value);
        break;

      case 374: // pass_switch_instance
        value.move< std::shared_ptr<Verilogast::pass_switch_instance> > (s.value);
        break;

      case 502: // path_declaration
        value.move< std::shared_ptr<Verilogast::path_declaration> > (s.value);
        break;

      case 249: // port
        value.move< std::shared_ptr<Verilogast::port> > (s.value);
        break;

      case 255: // port_declaration
        value.move< std::shared_ptr<Verilogast::port_declaration> > (s.value);
        break;

      case 250: // port_expression_opt
      case 251: // port_expression
        value.move< std::shared_ptr<Verilogast::port_expression> > (s.value);
        break;

      case 314: // port_identifier_equ1_expression_opt
        value.move< std::shared_ptr<Verilogast::port_identifier_equ1_expression_opt> > (s.value);
        break;

      case 253: // port_reference
        value.move< std::shared_ptr<Verilogast::port_reference> > (s.value);
        break;

      case 578: // primary
        value.move< std::shared_ptr<Verilogast::primary> > (s.value);
        break;

      case 465: // procedural_continuous_assignments
        value.move< std::shared_ptr<Verilogast::procedural_continuous_assignments> > (s.value);
        break;

      case 482: // procedural_timing_control
        value.move< std::shared_ptr<Verilogast::procedural_timing_control> > (s.value);
        break;

      case 483: // procedural_timing_control_statement
        value.move< std::shared_ptr<Verilogast::procedural_timing_control_statement> > (s.value);
        break;

      case 376: // pull_gate_instance
        value.move< std::shared_ptr<Verilogast::pull_gate_instance> > (s.value);
        break;

      case 365: // pulldown_strength_opt
      case 378: // pulldown_strength
        value.move< std::shared_ptr<Verilogast::pulldown_strength> > (s.value);
        break;

      case 366: // pullup_strength_opt
      case 379: // pullup_strength
        value.move< std::shared_ptr<Verilogast::pullup_strength> > (s.value);
        break;

      case 500: // pulsestyle_declaration
        value.move< std::shared_ptr<Verilogast::pulsestyle_declaration> > (s.value);
        break;

      case 262: // range_opt
      case 327: // range
        value.move< std::shared_ptr<Verilogast::range> > (s.value);
        break;

      case 254: // lsquare_range_expression_rsquare_opt
      case 576: // lsquare_range_expression_rsquare
        value.move< std::shared_ptr<Verilogast::range_expression> > (s.value);
        break;

      case 277: // real_declaration
        value.move< std::shared_ptr<Verilogast::real_declaration> > (s.value);
        break;

      case 283: // real_type
        value.move< std::shared_ptr<Verilogast::real_type> > (s.value);
        break;

      case 278: // realtime_declaration
        value.move< std::shared_ptr<Verilogast::realtime_declaration> > (s.value);
        break;

      case 549: // reference_event
        value.move< std::shared_ptr<Verilogast::reference_event> > (s.value);
        break;

      case 279: // reg_declaration
        value.move< std::shared_ptr<Verilogast::reg_declaration> > (s.value);
        break;

      case 535: // remain_active_flag_opt
      case 550: // remain_active_flag
        value.move< std::shared_ptr<Verilogast::remain_active_flag> > (s.value);
        break;

      case 468: // seq_block
        value.move< std::shared_ptr<Verilogast::seq_block> > (s.value);
        break;

      case 449: // seq_input_list
        value.move< std::shared_ptr<Verilogast::seq_input_list> > (s.value);
        break;

      case 443: // sequential_body
        value.move< std::shared_ptr<Verilogast::sequential_body> > (s.value);
        break;

      case 448: // sequential_entry
        value.move< std::shared_ptr<Verilogast::sequential_entry> > (s.value);
        break;

      case 501: // showcancelled_declaration
        value.move< std::shared_ptr<Verilogast::showcancelled_declaration> > (s.value);
        break;

      case 503: // simple_path_declaration
        value.move< std::shared_ptr<Verilogast::simple_path_declaration> > (s.value);
        break;

      case 497: // specify_block
        value.move< std::shared_ptr<Verilogast::specify_block> > (s.value);
        break;

      case 509: // specify_inout_terminal_descriptor
        value.move< std::shared_ptr<Verilogast::specify_inout_terminal_descriptor> > (s.value);
        break;

      case 499: // specify_item
        value.move< std::shared_ptr<Verilogast::specify_item> > (s.value);
        break;

      case 560: // specify_terminal_descriptor
        value.move< std::shared_ptr<Verilogast::specify_terminal_descriptor> > (s.value);
        break;

      case 320: // specparam_assignment
      case 321: // pulse_control_specparam
        value.move< std::shared_ptr<Verilogast::specparam_assignment> > (s.value);
        break;

      case 264: // specparam_declaration
        value.move< std::shared_ptr<Verilogast::specparam_declaration> > (s.value);
        break;

      case 525: // stamptime_condition_opt
      case 551: // stamptime_condition
        value.move< std::shared_ptr<Verilogast::stamptime_condition> > (s.value);
        break;

      case 552: // start_edge_offset
        value.move< std::shared_ptr<Verilogast::start_edge_offset> > (s.value);
        break;

      case 518: // state_dependent_path_declaration
        value.move< std::shared_ptr<Verilogast::state_dependent_path_declaration> > (s.value);
        break;

      case 471: // statement
      case 472: // statement_or_null
      case 473: // function_statement
      case 486: // else_statement_or_null_opt
        value.move< std::shared_ptr<Verilogast::statement> > (s.value);
        break;

      case 470: // statement_or_block_item
        value.move< std::shared_ptr<Verilogast::statement_or_block_item> > (s.value);
        break;

      case 582: // string_typedef
        value.move< std::shared_ptr<Verilogast::string_typedef> > (s.value);
        break;

      case 569: // system_function_call
        value.move< std::shared_ptr<Verilogast::system_function_call> > (s.value);
        break;

      case 606: // system_function_identifier
        value.move< std::shared_ptr<Verilogast::system_function_identifier> > (s.value);
        break;

      case 492: // system_task_enable
        value.move< std::shared_ptr<Verilogast::system_task_enable> > (s.value);
        break;

      case 520: // system_timing_check
        value.move< std::shared_ptr<Verilogast::system_timing_check> > (s.value);
        break;

      case 336: // task_declaration
        value.move< std::shared_ptr<Verilogast::task_declaration> > (s.value);
        break;

      case 496: // task_enable
        value.move< std::shared_ptr<Verilogast::task_enable> > (s.value);
        break;

      case 338: // task_item_declaration
        value.move< std::shared_ptr<Verilogast::task_item_declaration> > (s.value);
        break;

      case 341: // task_port_item
        value.move< std::shared_ptr<Verilogast::task_port_item> > (s.value);
        break;

      case 345: // tf_inout_declaration
        value.move< std::shared_ptr<Verilogast::tf_inout_declaration> > (s.value);
        break;

      case 342: // tf_input_declaration
        value.move< std::shared_ptr<Verilogast::tf_input_declaration> > (s.value);
        break;

      case 347: // tf_io_declaration_gen
        value.move< std::shared_ptr<Verilogast::tf_io_declaration_gen> > (s.value);
        break;

      case 344: // tf_output_declaration
        value.move< std::shared_ptr<Verilogast::tf_output_declaration> > (s.value);
        break;

      case 539: // threshold_opt
      case 553: // threshold
        value.move< std::shared_ptr<Verilogast::threshold> > (s.value);
        break;

      case 280: // time_declaration
        value.move< std::shared_ptr<Verilogast::time_declaration> > (s.value);
        break;

      case 555: // timing_check_event
        value.move< std::shared_ptr<Verilogast::timing_check_event> > (s.value);
        break;

      case 556: // timing_check_event_control_opt
      case 559: // timing_check_event_control
        value.move< std::shared_ptr<Verilogast::timing_check_event_control> > (s.value);
        break;

      case 554: // timing_check_limit
        value.move< std::shared_ptr<Verilogast::timing_check_limit> > (s.value);
        break;

      case 442: // udp_body
        value.move< std::shared_ptr<Verilogast::udp_body> > (s.value);
        break;

      case 430: // udp_declaration
        value.move< std::shared_ptr<Verilogast::udp_declaration> > (s.value);
        break;

      case 434: // udp_declaration_port_list
        value.move< std::shared_ptr<Verilogast::udp_declaration_port_list> > (s.value);
        break;

      case 444: // udp_initial_statement_opt
      case 446: // udp_initial_statement
        value.move< std::shared_ptr<Verilogast::udp_initial_statement> > (s.value);
        break;

      case 438: // udp_input_declaration
        value.move< std::shared_ptr<Verilogast::udp_input_declaration> > (s.value);
        break;

      case 439: // udp_input_declaration_sigular
        value.move< std::shared_ptr<Verilogast::udp_input_declaration_sigular> > (s.value);
        break;

      case 437: // udp_output_declaration
        value.move< std::shared_ptr<Verilogast::udp_output_declaration> > (s.value);
        break;

      case 436: // udp_port_declaration
        value.move< std::shared_ptr<Verilogast::udp_port_declaration> > (s.value);
        break;

      case 432: // udp_port_list
        value.move< std::shared_ptr<Verilogast::udp_port_list> > (s.value);
        break;

      case 441: // udp_reg_declaration
        value.move< std::shared_ptr<Verilogast::udp_reg_declaration> > (s.value);
        break;

      case 285: // variable_type
        value.move< std::shared_ptr<Verilogast::variable_type> > (s.value);
        break;

      case 484: // wait_statement
        value.move< std::shared_ptr<Verilogast::wait_statement> > (s.value);
        break;

      case 450: // level_symbol_list
        value.move< std::shared_ptr<std::list<Verilogast::level_symbol>> > (s.value);
        break;

      case 584: // comma_attr_spec_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::attr_spec>>> > (s.value);
        break;

      case 241: // attribute_instance_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::attribute_instance>>> > (s.value);
        break;

      case 332: // function_port_list
      case 334: // comma_attribute_instance_list_tf_input_declaration_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::attribute_instance_list_tf_input_declaration>>> > (s.value);
        break;

      case 351: // list_of_block_real_identifiers
      case 352: // comma_block_real_type_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::block_real_type>>> > (s.value);
        break;

      case 349: // list_of_block_variable_identifiers
      case 350: // comma_block_variable_type_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::block_variable_type>>> > (s.value);
        break;

      case 424: // case_generate_item_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::case_generate_item>>> > (s.value);
        break;

      case 488: // case_item_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::case_item>>> > (s.value);
        break;

      case 360: // comma_cmos_switch_instance_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::cmos_switch_instance>>> > (s.value);
        break;

      case 259: // parameter_override
      case 293: // list_of_defparam_assignments
      case 294: // comma_defparam_assignment_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::defparam_assignment>>> > (s.value);
        break;

      case 235: // source_text
      case 236: // description_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::description>>> > (s.value);
        break;

      case 284: // dimension_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::dimension>>> > (s.value);
        break;

      case 562: // comma_edge_descriptor_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::edge_descriptor>>> > (s.value);
        break;

      case 361: // comma_enable_gate_instance_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::enable_gate_instance>>> > (s.value);
        break;

      case 480: // event_expression_orcomma_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::event_expression>>> > (s.value);
        break;

      case 295: // list_of_event_identifiers
      case 296: // comma_event_identifier_dimension_list_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::event_identifier_dimension_list>>> > (s.value);
        break;

      case 373: // comma_output_terminal_list
      case 455: // comma_input_terminal_list
      case 490: // comma_expression_list
      case 493: // lp_expression_opt_comma_expression_list_rp_opt
      case 494: // lp_expression_opt_comma_expression_list_rp
      case 495: // comma_expression_opt_list
      case 570: // lp_expression_comma_expression_list_rp_op
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::expression>>> > (s.value);
        break;

      case 329: // function_item_declaration_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::function_item_declaration>>> > (s.value);
        break;

      case 305: // list_of_port_identifiers
      case 306: // comma_port_identifier_list
      case 415: // list_of_genvar_identifiers
      case 416: // comma_genvar_identifier_list
      case 433: // comma_input_port_identifier_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::identifier>>> > (s.value);
        break;

      case 594: // identifier_lsq_expression_rsq_opt_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::identifier_lsq_expression_rsq>>> > (s.value);
        break;

      case 398: // comma_ordered_parameter_assignment_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::mintypmax_expression>>> > (s.value);
        break;

      case 394: // comma_module_instance_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::module_instance>>> > (s.value);
        break;

      case 243: // module_item_list
      case 413: // module_or_generate_item_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::module_item>>> > (s.value);
        break;

      case 362: // comma_mos_switch_instance_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::mos_switch_instance>>> > (s.value);
        break;

      case 363: // comma_n_input_gate_instance_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::n_input_gate_instance>>> > (s.value);
        break;

      case 356: // comma_n_output_gate_instance_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::n_output_gate_instance>>> > (s.value);
        break;

      case 399: // comma_named_parameter_assignment_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::named_parameter_assignment>>> > (s.value);
        break;

      case 408: // comma_named_port_connection_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::named_port_connection>>> > (s.value);
        break;

      case 457: // list_of_net_assignments
      case 458: // comma_net_assignment_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::net_assignment>>> > (s.value);
        break;

      case 298: // list_of_net_decl_assignments
      case 299: // comma_net_decl_assignment_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::net_decl_assignment>>> > (s.value);
        break;

      case 300: // list_of_net_identifiers
      case 302: // comma_net_identifier_dimension_list_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::net_identifier_dimension_list>>> > (s.value);
        break;

      case 580: // comma_net_lvalue_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::net_lvalue>>> > (s.value);
        break;

      case 407: // comma_ordered_port_connection_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::ordered_port_connection>>> > (s.value);
        break;

      case 303: // list_of_param_assignments
      case 304: // comma_param_assignment_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::param_assignment>>> > (s.value);
        break;

      case 242: // module_parameter_port_list_opt
      case 245: // module_parameter_port_list
      case 246: // comma_parameter_declaration_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::parameter_declaration>>> > (s.value);
        break;

      case 357: // comma_pass_enable_switch_instance_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::pass_enable_switch_instance>>> > (s.value);
        break;

      case 358: // comma_pass_switch_instance_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::pass_switch_instance>>> > (s.value);
        break;

      case 247: // list_of_ports
      case 248: // comma_port_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::port>>> > (s.value);
        break;

      case 239: // list_of_port_declarations
      case 240: // comma_port_declaration_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::port_declaration>>> > (s.value);
        break;

      case 313: // list_of_variable_port_identifiers
      case 316: // comma_port_identifier_equ1_expression_opt_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::port_identifier_equ1_expression_opt>>> > (s.value);
        break;

      case 252: // comma_port_reference_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::port_reference>>> > (s.value);
        break;

      case 359: // comma_pull_gate_instance_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::pull_gate_instance>>> > (s.value);
        break;

      case 596: // lsquare_range_expression_rsquare_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::range_expression>>> > (s.value);
        break;

      case 307: // list_of_real_identifiers
      case 308: // comma_real_type_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::real_type>>> > (s.value);
        break;

      case 445: // sequential_entry_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::sequential_entry>>> > (s.value);
        break;

      case 507: // list_of_path_inouts
      case 508: // comma_specify_inout_terminal_descriptor_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::specify_inout_terminal_descriptor>>> > (s.value);
        break;

      case 498: // specify_item_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::specify_item>>> > (s.value);
        break;

      case 309: // list_of_specparam_assignments
      case 310: // comma_specparam_assignment_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::specparam_assignment>>> > (s.value);
        break;

      case 469: // statement_or_block_item_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::statement_or_block_item>>> > (s.value);
        break;

      case 337: // task_item_declaration_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::task_item_declaration>>> > (s.value);
        break;

      case 339: // task_port_list
      case 340: // comma_task_port_item_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::task_port_item>>> > (s.value);
        break;

      case 435: // comma_udp_input_declaration_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::udp_input_declaration_sigular>>> > (s.value);
        break;

      case 431: // udp_port_declaration_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::udp_port_declaration>>> > (s.value);
        break;

      case 311: // list_of_variable_identifiers
      case 312: // comma_variable_type_list
        value.move< std::shared_ptr<std::list<std::shared_ptr<Verilogast::variable_type>>> > (s.value);
        break;

      case 223: // REAL_NUMBER
      case 224: // STRING
      case 225: // ESCAPED_IDENTIFIER
      case 226: // SIMPLE_IDENTIFIER
      case 227: // SYSTEM_TASK_FUNCTION_IDENTIFIER
        value.move< std::string > (s.value);
        break;

      case 219: // UNSIGNED_NUMBER_size
      case 220: // OCTAL_NUMBER
      case 221: // BINARY_NUMBER
      case 222: // HEX_NUMBER
        value.move< std::tuple<unsigned int,std::string,std::string> > (s.value);
        break;

      case 218: // UNSIGNED_NUMBER
        value.move< unsigned int > (s.value);
        break;

      default:
        break;
    }

    location = s.location;
  }

  // by_type.
  inline
  verilog_parser::by_type::by_type ()
     : type (empty)
  {}

  inline
  verilog_parser::by_type::by_type (const by_type& other)
    : type (other.type)
  {}

  inline
  verilog_parser::by_type::by_type (token_type t)
    : type (yytranslate_ (t))
  {}

  inline
  void
  verilog_parser::by_type::move (by_type& that)
  {
    type = that.type;
    that.type = empty;
  }

  inline
  int
  verilog_parser::by_type::type_get () const
  {
    return type;
  }

  inline
  verilog_parser::token_type
  verilog_parser::by_type::token () const
  {
    // YYTOKNUM[NUM] -- (External) token number corresponding to the
    // (internal) symbol number NUM (which must be that of a token).  */
    static
    const unsigned short int
    yytoken_number_[] =
    {
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488
    };
    return static_cast<token_type> (yytoken_number_[type]);
  }
  // Implementation of make_symbol for each symbol type.
  verilog_parser::symbol_type
  verilog_parser::make_END (const location_type& l)
  {
    return symbol_type (token::TOK_END, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_ALWAYS (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_ALWAYS, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_AND (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_AND, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_ASSIGN (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_ASSIGN, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_AUTOMATIC (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_AUTOMATIC, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_BEGIN (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_BEGIN, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_BUF (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_BUF, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_BUFIF0 (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_BUFIF0, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_BUFIF1 (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_BUFIF1, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_CASE (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_CASE, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_CASEX (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_CASEX, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_CASEZ (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_CASEZ, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_CELL (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_CELL, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_CMOS (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_CMOS, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_CONFIG (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_CONFIG, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_DEASSIGN (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_DEASSIGN, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_DEFAULT (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_DEFAULT, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_DEFPARAM (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_DEFPARAM, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_DESIGN (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_DESIGN, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_DISABLE (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_DISABLE, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_EDGE (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_EDGE, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_ELSE (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_ELSE, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_END (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_END, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_ENDCASE (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_ENDCASE, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_ENDCONFIG (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_ENDCONFIG, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_ENDFUNCTION (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_ENDFUNCTION, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_ENDGENERATE (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_ENDGENERATE, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_ENDMODULE (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_ENDMODULE, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_ENDPRIMITIVE (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_ENDPRIMITIVE, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_ENDSPECIFY (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_ENDSPECIFY, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_ENDTABLE (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_ENDTABLE, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_ENDTASK (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_ENDTASK, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_EVENT (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_EVENT, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_FOR (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_FOR, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_FORCE (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_FORCE, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_FOREVER (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_FOREVER, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_FORK (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_FORK, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_FUNCTION (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_FUNCTION, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_GENERATE (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_GENERATE, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_GENVAR (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_GENVAR, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_HIGHZ0 (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_HIGHZ0, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_HIGHZ1 (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_HIGHZ1, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_IF (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_IF, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_IFNONE (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_IFNONE, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_INCDIR (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_INCDIR, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_INCLUDE (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_INCLUDE, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_INITIAL (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_INITIAL, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_INOUT (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_INOUT, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_INPUT (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_INPUT, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_INSTANCE (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_INSTANCE, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_INTEGER (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_INTEGER, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_JOIN (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_JOIN, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_LARGE (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_LARGE, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_LIBLIST (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_LIBLIST, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_LIBRARY (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_LIBRARY, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_LOCALPARAM (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_LOCALPARAM, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_MACROMODULE (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_MACROMODULE, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_MEDIUM (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_MEDIUM, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_MODULE (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_MODULE, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_NAND (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_NAND, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_NEGEDGE (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_NEGEDGE, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_NMOS (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_NMOS, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_NOR (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_NOR, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_NOSHOWCANCELLED (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_NOSHOWCANCELLED, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_NOT (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_NOT, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_NOTIF0 (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_NOTIF0, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_NOTIF1 (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_NOTIF1, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_OR (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_OR, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_OUTPUT (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_OUTPUT, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_PARAMETER (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_PARAMETER, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_PMOS (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_PMOS, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_POSEDGE (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_POSEDGE, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_PRIMITIVE (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_PRIMITIVE, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_PULL0 (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_PULL0, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_PULL1 (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_PULL1, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_PULLDOWN (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_PULLDOWN, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_PULLUP (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_PULLUP, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_PULSESTYLE_ONEVENT (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_PULSESTYLE_ONEVENT, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_PULSESTYLE_ONDETECT (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_PULSESTYLE_ONDETECT, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_RCMOS (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_RCMOS, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_REAL (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_REAL, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_REALTIME (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_REALTIME, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_REG (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_REG, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_RELEASE (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_RELEASE, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_REPEAT (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_REPEAT, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_RNMOS (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_RNMOS, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_RPMOS (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_RPMOS, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_RTRAN (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_RTRAN, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_RTRANIF0 (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_RTRANIF0, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_RTRANIF1 (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_RTRANIF1, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_SCALARED (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_SCALARED, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_SHOWCANCELLED (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_SHOWCANCELLED, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_SIGNED (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_SIGNED, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_SMALL (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_SMALL, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_SPECIFY (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_SPECIFY, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_SPECPARAM (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_SPECPARAM, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_STRONG0 (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_STRONG0, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_STRONG1 (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_STRONG1, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_SUPPLY0 (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_SUPPLY0, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_SUPPLY1 (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_SUPPLY1, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_TABLE (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_TABLE, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_TASK (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_TASK, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_TIME (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_TIME, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_TRAN (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_TRAN, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_TRANIF0 (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_TRANIF0, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_TRANIF1 (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_TRANIF1, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_TRI (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_TRI, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_TRI0 (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_TRI0, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_TRI1 (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_TRI1, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_TRIAND (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_TRIAND, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_TRIOR (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_TRIOR, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_TRIREG (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_TRIREG, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_UNSIGNED (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_UNSIGNED, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_USE (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_USE, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_UWIRE (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_UWIRE, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_VECTORED (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_VECTORED, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_WAIT (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_WAIT, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_WAND (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_WAND, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_WEAK0 (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_WEAK0, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_WEAK1 (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_WEAK1, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_WHILE (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_WHILE, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_WIRE (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_WIRE, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_WOR (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_WOR, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_XNOR (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_XNOR, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_XOR (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_XOR, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_KEY_PATHPULSE (const location_type& l)
  {
    return symbol_type (token::TOK_KEY_PATHPULSE, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_DOLLOR_setup (const location_type& l)
  {
    return symbol_type (token::TOK_DOLLOR_setup, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_DOLLOR_hold (const location_type& l)
  {
    return symbol_type (token::TOK_DOLLOR_hold, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_DOLLOR_setuphold (const location_type& l)
  {
    return symbol_type (token::TOK_DOLLOR_setuphold, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_DOLLOR_recovery (const location_type& l)
  {
    return symbol_type (token::TOK_DOLLOR_recovery, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_DOLLOR_removal (const location_type& l)
  {
    return symbol_type (token::TOK_DOLLOR_removal, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_DOLLOR_recrem (const location_type& l)
  {
    return symbol_type (token::TOK_DOLLOR_recrem, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_DOLLOR_skew (const location_type& l)
  {
    return symbol_type (token::TOK_DOLLOR_skew, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_DOLLOR_timeskew (const location_type& l)
  {
    return symbol_type (token::TOK_DOLLOR_timeskew, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_DOLLOR_fullskew (const location_type& l)
  {
    return symbol_type (token::TOK_DOLLOR_fullskew, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_DOLLOR_period (const location_type& l)
  {
    return symbol_type (token::TOK_DOLLOR_period, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_DOLLOR_width (const location_type& l)
  {
    return symbol_type (token::TOK_DOLLOR_width, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_DOLLOR_nochange (const location_type& l)
  {
    return symbol_type (token::TOK_DOLLOR_nochange, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_AND3 (const location_type& l)
  {
    return symbol_type (token::TOK_AND3, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_EDGE_01 (const location_type& l)
  {
    return symbol_type (token::TOK_EDGE_01, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_EDGE_10 (const location_type& l)
  {
    return symbol_type (token::TOK_EDGE_10, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_EDGE_0 (const location_type& l)
  {
    return symbol_type (token::TOK_EDGE_0, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_EDGE_1 (const location_type& l)
  {
    return symbol_type (token::TOK_EDGE_1, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_EDGE_x (const location_type& l)
  {
    return symbol_type (token::TOK_EDGE_x, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_EDGE_X (const location_type& l)
  {
    return symbol_type (token::TOK_EDGE_X, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_EDGE_z (const location_type& l)
  {
    return symbol_type (token::TOK_EDGE_z, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_EDGE_Z (const location_type& l)
  {
    return symbol_type (token::TOK_EDGE_Z, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_TABLESC_LEVEL_SYMBOL_0 (const location_type& l)
  {
    return symbol_type (token::TOK_TABLESC_LEVEL_SYMBOL_0, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_TABLESC_LEVEL_SYMBOL_1 (const location_type& l)
  {
    return symbol_type (token::TOK_TABLESC_LEVEL_SYMBOL_1, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_TABLESC_LEVEL_SYMBOL_x (const location_type& l)
  {
    return symbol_type (token::TOK_TABLESC_LEVEL_SYMBOL_x, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_TABLESC_LEVEL_SYMBOL_X (const location_type& l)
  {
    return symbol_type (token::TOK_TABLESC_LEVEL_SYMBOL_X, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_TABLESC_LEVEL_SYMBOL_QUESTION (const location_type& l)
  {
    return symbol_type (token::TOK_TABLESC_LEVEL_SYMBOL_QUESTION, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_TABLESC_LEVEL_SYMBOL_b (const location_type& l)
  {
    return symbol_type (token::TOK_TABLESC_LEVEL_SYMBOL_b, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_TABLESC_LEVEL_SYMBOL_B (const location_type& l)
  {
    return symbol_type (token::TOK_TABLESC_LEVEL_SYMBOL_B, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_TABLESC_LEVEL_SYMBOL_SUB (const location_type& l)
  {
    return symbol_type (token::TOK_TABLESC_LEVEL_SYMBOL_SUB, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_TABLESC_EDGE_SYMBOL_r (const location_type& l)
  {
    return symbol_type (token::TOK_TABLESC_EDGE_SYMBOL_r, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_TABLESC_EDGE_SYMBOL_R (const location_type& l)
  {
    return symbol_type (token::TOK_TABLESC_EDGE_SYMBOL_R, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_TABLESC_EDGE_SYMBOL_f (const location_type& l)
  {
    return symbol_type (token::TOK_TABLESC_EDGE_SYMBOL_f, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_TABLESC_EDGE_SYMBOL_F (const location_type& l)
  {
    return symbol_type (token::TOK_TABLESC_EDGE_SYMBOL_F, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_TABLESC_EDGE_SYMBOL_p (const location_type& l)
  {
    return symbol_type (token::TOK_TABLESC_EDGE_SYMBOL_p, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_TABLESC_EDGE_SYMBOL_P (const location_type& l)
  {
    return symbol_type (token::TOK_TABLESC_EDGE_SYMBOL_P, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_TABLESC_EDGE_SYMBOL_n (const location_type& l)
  {
    return symbol_type (token::TOK_TABLESC_EDGE_SYMBOL_n, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_TABLESC_EDGE_SYMBOL_N (const location_type& l)
  {
    return symbol_type (token::TOK_TABLESC_EDGE_SYMBOL_N, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_TABLESC_EDGE_SYMBOL_MUL (const location_type& l)
  {
    return symbol_type (token::TOK_TABLESC_EDGE_SYMBOL_MUL, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_OP2_ADD (const location_type& l)
  {
    return symbol_type (token::TOK_OP2_ADD, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_OP2_SUB (const location_type& l)
  {
    return symbol_type (token::TOK_OP2_SUB, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_OP2_AND (const location_type& l)
  {
    return symbol_type (token::TOK_OP2_AND, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_OP2_OR (const location_type& l)
  {
    return symbol_type (token::TOK_OP2_OR, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_OP2_XOR (const location_type& l)
  {
    return symbol_type (token::TOK_OP2_XOR, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_OP2_XNOR (const location_type& l)
  {
    return symbol_type (token::TOK_OP2_XNOR, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_OP1_LOGIC_NEG (const location_type& l)
  {
    return symbol_type (token::TOK_OP1_LOGIC_NEG, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_OP1_BITWISE_NEG (const location_type& l)
  {
    return symbol_type (token::TOK_OP1_BITWISE_NEG, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_OP1_REDUCE_NAND (const location_type& l)
  {
    return symbol_type (token::TOK_OP1_REDUCE_NAND, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_OP1_REDUCE_NOR (const location_type& l)
  {
    return symbol_type (token::TOK_OP1_REDUCE_NOR, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_OP2_MULTIPLE (const location_type& l)
  {
    return symbol_type (token::TOK_OP2_MULTIPLE, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_OP2_DIV (const location_type& l)
  {
    return symbol_type (token::TOK_OP2_DIV, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_OP2_MOD (const location_type& l)
  {
    return symbol_type (token::TOK_OP2_MOD, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_OP2_EQU2 (const location_type& l)
  {
    return symbol_type (token::TOK_OP2_EQU2, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_OP2_NEQ2 (const location_type& l)
  {
    return symbol_type (token::TOK_OP2_NEQ2, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_OP2_EQU3 (const location_type& l)
  {
    return symbol_type (token::TOK_OP2_EQU3, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_OP2_NEQ3 (const location_type& l)
  {
    return symbol_type (token::TOK_OP2_NEQ3, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_OP2_AND2 (const location_type& l)
  {
    return symbol_type (token::TOK_OP2_AND2, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_OP2_OR2 (const location_type& l)
  {
    return symbol_type (token::TOK_OP2_OR2, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_OP2_POWER (const location_type& l)
  {
    return symbol_type (token::TOK_OP2_POWER, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_OP2_LT (const location_type& l)
  {
    return symbol_type (token::TOK_OP2_LT, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_OP2_LE (const location_type& l)
  {
    return symbol_type (token::TOK_OP2_LE, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_OP2_GT (const location_type& l)
  {
    return symbol_type (token::TOK_OP2_GT, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_OP2_GE (const location_type& l)
  {
    return symbol_type (token::TOK_OP2_GE, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_OP2_LOGICAL_RIGHTSHIFT (const location_type& l)
  {
    return symbol_type (token::TOK_OP2_LOGICAL_RIGHTSHIFT, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_OP2_LOGICAL_LEFTSHIFT (const location_type& l)
  {
    return symbol_type (token::TOK_OP2_LOGICAL_LEFTSHIFT, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_OP2_ARITHMETIC_RIGHTSHIFT (const location_type& l)
  {
    return symbol_type (token::TOK_OP2_ARITHMETIC_RIGHTSHIFT, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_OP2_ARITHMETIC_LEFTSHIFT (const location_type& l)
  {
    return symbol_type (token::TOK_OP2_ARITHMETIC_LEFTSHIFT, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_OP2_QUESTION (const location_type& l)
  {
    return symbol_type (token::TOK_OP2_QUESTION, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_LPARENT (const location_type& l)
  {
    return symbol_type (token::TOK_LPARENT, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_LPARENT_STRENGTH (const location_type& l)
  {
    return symbol_type (token::TOK_LPARENT_STRENGTH, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_LPARENTSTART (const location_type& l)
  {
    return symbol_type (token::TOK_LPARENTSTART, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_RPARENT (const location_type& l)
  {
    return symbol_type (token::TOK_RPARENT, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_RPARENTSTART (const location_type& l)
  {
    return symbol_type (token::TOK_RPARENTSTART, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_COMMA (const location_type& l)
  {
    return symbol_type (token::TOK_COMMA, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_COMMA_port_dec (const location_type& l)
  {
    return symbol_type (token::TOK_COMMA_port_dec, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_SEMICOLON (const location_type& l)
  {
    return symbol_type (token::TOK_SEMICOLON, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_COLON (const location_type& l)
  {
    return symbol_type (token::TOK_COLON, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_LSQUARE (const location_type& l)
  {
    return symbol_type (token::TOK_LSQUARE, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_RSQUARE (const location_type& l)
  {
    return symbol_type (token::TOK_RSQUARE, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_EQU1 (const location_type& l)
  {
    return symbol_type (token::TOK_EQU1, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_LBRACE (const location_type& l)
  {
    return symbol_type (token::TOK_LBRACE, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_RBRACE (const location_type& l)
  {
    return symbol_type (token::TOK_RBRACE, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_PERIOD (const location_type& l)
  {
    return symbol_type (token::TOK_PERIOD, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_AT (const location_type& l)
  {
    return symbol_type (token::TOK_AT, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_JING (const location_type& l)
  {
    return symbol_type (token::TOK_JING, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_ADDRANGE (const location_type& l)
  {
    return symbol_type (token::TOK_ADDRANGE, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_SUBRANGE (const location_type& l)
  {
    return symbol_type (token::TOK_SUBRANGE, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_DOLLOR (const location_type& l)
  {
    return symbol_type (token::TOK_DOLLOR, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_IMPLY (const location_type& l)
  {
    return symbol_type (token::TOK_IMPLY, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_IMPLY2 (const location_type& l)
  {
    return symbol_type (token::TOK_IMPLY2, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_IMPLYSTART (const location_type& l)
  {
    return symbol_type (token::TOK_IMPLYSTART, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_UNSIGNED_NUMBER (const unsigned int& v, const location_type& l)
  {
    return symbol_type (token::TOK_UNSIGNED_NUMBER, v, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_UNSIGNED_NUMBER_size (const std::tuple<unsigned int,std::string,std::string>& v, const location_type& l)
  {
    return symbol_type (token::TOK_UNSIGNED_NUMBER_size, v, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_OCTAL_NUMBER (const std::tuple<unsigned int,std::string,std::string>& v, const location_type& l)
  {
    return symbol_type (token::TOK_OCTAL_NUMBER, v, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_BINARY_NUMBER (const std::tuple<unsigned int,std::string,std::string>& v, const location_type& l)
  {
    return symbol_type (token::TOK_BINARY_NUMBER, v, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_HEX_NUMBER (const std::tuple<unsigned int,std::string,std::string>& v, const location_type& l)
  {
    return symbol_type (token::TOK_HEX_NUMBER, v, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_REAL_NUMBER (const std::string& v, const location_type& l)
  {
    return symbol_type (token::TOK_REAL_NUMBER, v, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_STRING (const std::string& v, const location_type& l)
  {
    return symbol_type (token::TOK_STRING, v, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_ESCAPED_IDENTIFIER (const std::string& v, const location_type& l)
  {
    return symbol_type (token::TOK_ESCAPED_IDENTIFIER, v, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_SIMPLE_IDENTIFIER (const std::string& v, const location_type& l)
  {
    return symbol_type (token::TOK_SIMPLE_IDENTIFIER, v, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_SYSTEM_TASK_FUNCTION_IDENTIFIER (const std::string& v, const location_type& l)
  {
    return symbol_type (token::TOK_SYSTEM_TASK_FUNCTION_IDENTIFIER, v, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_OP1_ADD (const location_type& l)
  {
    return symbol_type (token::TOK_OP1_ADD, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_OP1_SUB (const location_type& l)
  {
    return symbol_type (token::TOK_OP1_SUB, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_OP1_AND (const location_type& l)
  {
    return symbol_type (token::TOK_OP1_AND, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_OP1_OR (const location_type& l)
  {
    return symbol_type (token::TOK_OP1_OR, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_OP1_XOR (const location_type& l)
  {
    return symbol_type (token::TOK_OP1_XOR, l);
  }

  verilog_parser::symbol_type
  verilog_parser::make_OP1_XNOR (const location_type& l)
  {
    return symbol_type (token::TOK_OP1_XNOR, l);
  }



} // yy
#line 11532 "verilog_parser.hpp" // lalr1.cc:372




#endif // !YY_YY_VERILOG_PARSER_HPP_INCLUDED
