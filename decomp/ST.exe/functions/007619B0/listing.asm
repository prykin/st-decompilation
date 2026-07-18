FID_conflict:_remove:
007619B0  55                        PUSH EBP
007619B1  8B EC                     MOV EBP,ESP
007619B3  51                        PUSH ECX
007619B4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007619B7  50                        PUSH EAX
007619B8  FF 15 E8 BC 85 00         CALL dword ptr [0x0085bce8]
007619BE  85 C0                     TEST EAX,EAX
007619C0  75 0B                     JNZ 0x007619cd
007619C2  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
007619C8  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007619CB  EB 07                     JMP 0x007619d4
LAB_007619cd:
007619CD  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_007619d4:
007619D4  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
007619D8  74 11                     JZ 0x007619eb
007619DA  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007619DD  51                        PUSH ECX
007619DE  E8 0D F2 FD FF            CALL 0x00740bf0
007619E3  83 C4 04                  ADD ESP,0x4
007619E6  83 C8 FF                  OR EAX,0xffffffff
007619E9  EB 02                     JMP 0x007619ed
LAB_007619eb:
007619EB  33 C0                     XOR EAX,EAX
LAB_007619ed:
007619ED  8B E5                     MOV ESP,EBP
007619EF  5D                        POP EBP
007619F0  C3                        RET
