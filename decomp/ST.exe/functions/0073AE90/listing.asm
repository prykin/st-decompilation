FUN_0073ae90:
0073AE90  55                        PUSH EBP
0073AE91  8B EC                     MOV EBP,ESP
0073AE93  A1 88 72 85 00            MOV EAX,[0x00857288]
0073AE98  50                        PUSH EAX
0073AE99  E8 72 BD FF FF            CALL 0x00736c10
0073AE9E  83 C4 04                  ADD ESP,0x4
0073AEA1  33 C9                     XOR ECX,ECX
0073AEA3  83 F8 03                  CMP EAX,0x3
0073AEA6  0F 94 C1                  SETZ CL
0073AEA9  89 0D 78 72 85 00         MOV dword ptr [0x00857278],ECX
0073AEAF  6A 01                     PUSH 0x1
0073AEB1  68 E0 AE 73 00            PUSH 0x73aee0
0073AEB6  FF 15 14 BC 85 00         CALL dword ptr [0x0085bc14]
0073AEBC  8B 15 8C 72 85 00         MOV EDX,dword ptr [0x0085728c]
0073AEC2  83 E2 04                  AND EDX,0x4
0073AEC5  85 D2                     TEST EDX,EDX
0073AEC7  75 0A                     JNZ 0x0073aed3
0073AEC9  C7 05 8C 72 85 00 00 00 00 00  MOV dword ptr [0x0085728c],0x0
LAB_0073aed3:
0073AED3  5D                        POP EBP
0073AED4  C3                        RET
