//Flush module optimized for System Verilog

//Flush is a mistake eraser...
//Checks for branch/uncondbranch, and then cancels the incorrect instructions that
//snuck into the pipeline before it

//Split the flush module into two different aspects.

// The Flush module detects control hazards when a taken conditional branch or an
// unconditional branch is resolved in the MEM stage. At that point, wrong-path
// instructions occupy the EX and ID stages, and another wrong-path fetch may be in progress.
// In PipelinedProcessor.sv, Flush resets ID_EX and EX_MEM to squash the instructions from
// ID and EX. IF_ID is not reset; it is allowed to capture the instruction at the redirected
// branch target, replacing the wrong-path instruction.
module Flush(
    input logic EX_MEM_Branch,
    input logic EX_MEM_Zero,
    input logic EX_MEM_UncondBranch,

    output logic Flush
);
    always_comb begin
        Flush = (EX_MEM_Branch & EX_MEM_Zero) | EX_MEM_UncondBranch;
    end



endmodule
