FUN_0073f9d0:
0073F9D0  55                        PUSH EBP
0073F9D1  8B EC                     MOV EBP,ESP
0073F9D3  83 EC 08                  SUB ESP,0x8
0073F9D6  53                        PUSH EBX
0073F9D7  56                        PUSH ESI
0073F9D8  57                        PUSH EDI
0073F9D9  A1 F4 72 85 00            MOV EAX,[0x008572f4]
0073F9DE  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0073F9E1  DB E3                     FNINIT
0073F9E3  E8 08 50 FF FF            CALL 0x007349f0
0073F9E8  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
0073F9EC  74 31                     JZ 0x0073fa1f
0073F9EE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073F9F1  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
0073F9F4  8B 02                     MOV EAX,dword ptr [EDX]
0073F9F6  25 08 00 01 00            AND EAX,0x10008
0073F9FB  85 C0                     TEST EAX,EAX
0073F9FD  74 20                     JZ 0x0073fa1f
0073F9FF  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073FA02  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
0073FA05  83 C2 1C                  ADD EDX,0x1c
0073FA08  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0073FA0B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0073FA0E  C7 40 04 00 00 00 00      MOV dword ptr [EAX + 0x4],0x0
0073FA15  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0073FA18  C7 41 08 FF FF 00 00      MOV dword ptr [ECX + 0x8],0xffff
LAB_0073fa1f:
0073FA1F  5F                        POP EDI
0073FA20  5E                        POP ESI
0073FA21  5B                        POP EBX
0073FA22  8B E5                     MOV ESP,EBP
0073FA24  5D                        POP EBP
0073FA25  C3                        RET
