# 🧠 RISC-V 32-Bit CPU Implementation  

A full 5-stage pipelined **RISC-V RV32I** processor designed and simulated using **SystemVerilog**, **ModelSim**, and **GTKWave**.  
This project implements instruction fetch, decode, execute, memory, and write-back stages with integrated **data hazard detection**, **forwarding paths**, and **error handling**.

---

## ⚙️ Overview  

This CPU core is built as part of an academic and research-oriented project to explore **computer architecture design**, **pipeline optimization**, and **hardware-software co-simulation**.  
It adheres to the RISC-V ISA specification (RV32I base integer instruction set) and demonstrates core concepts of a modern pipelined CPU.

### 🔹 Key Features
- **5-Stage Pipeline** – IF, ID, EX, MEM, WB  
- **Data Hazard Detection and Forwarding**  
- **Stall and Flush Control Logic**  
- **Branch Prediction Mechanism (Static)**  
- **Memory Read/Write Handling**  
- **Error Checking for Invalid Instructions & Memory Access**  
- **Parameterizable Design (Data & Address Widths)**  

---

## 🧩 Module Breakdown  

| Stage | Module | Description |
|:------|:--------|:-------------|
| **Instruction Fetch (IF)** | `fetch.sv` | Fetches instructions from memory using the PC register; manages PC increments and branch updates. |
| **Instruction Decode (ID)** | `decode.sv` | Decodes the fetched instruction and reads register operands. |
| **Execute (EX)** | `alu.sv`, `control.sv` | Performs arithmetic/logic operations and branch target calculations. |
| **Memory (MEM)** | `memory.sv` | Handles load/store operations to data memory. |
| **Writeback (WB)** | `writeback.sv` | Writes results back to the register file. |
| **Top Module** | `pdX.sv`, `design_wrapper.sv` | Integrates all stages and control logic; manages pipeline register transitions. |

---

## 🧠 Design Architecture  

      ┌────────────┐
      │ Instruction│
      │    Fetch   │
      └──────┬─────┘
             │ IF/ID
      ┌──────┴─────┐
      │ Instruction│
      │   Decode   │
      └──────┬─────┘
             │ ID/EX
      ┌──────┴─────┐
      │  Execute   │
      │ (ALU + Fwd)│
      └──────┬─────┘
             │ EX/MEM
      ┌──────┴─────┐
      │   Memory   │
      │ Access     │
      └──────┬─────┘
             │ MEM/WB
      ┌──────┴─────┐
      │ Write Back │
      └────────────┘


---

| Tool                     | Purpose                                        |
| :----------------------- | :--------------------------------------------- |
| **SystemVerilog**        | Hardware description and module implementation |
| **ModelSim / QuestaSim** | Simulation and debugging                       |
| **GTKWave**              | Waveform visualization                         |
| **Icarus Verilog**       | Open-source simulation (Windows-compatible)    |


🙏 Acknowledgment

Special thanks to Professor Anirudh Kaushik from the Department of Electrical Engineering and Computer Science (EECS 4201),
Lassonde School of Engineering, York University, for providing the base project framework and support that made this implementation possible.

