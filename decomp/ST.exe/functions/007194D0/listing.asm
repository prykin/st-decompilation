FUN_007194d0:
007194D0  55                        PUSH EBP
007194D1  8B EC                     MOV EBP,ESP
007194D3  83 EC 0C                  SUB ESP,0xc
007194D6  56                        PUSH ESI
007194D7  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
007194DA  57                        PUSH EDI
007194DB  8B 06                     MOV EAX,dword ptr [ESI]
007194DD  85 C0                     TEST EAX,EAX
007194DF  75 0B                     JNZ 0x007194ec
007194E1  5F                        POP EDI
007194E2  B8 01 00 00 00            MOV EAX,0x1
007194E7  5E                        POP ESI
007194E8  8B E5                     MOV ESP,EBP
007194EA  5D                        POP EBP
007194EB  C3                        RET
LAB_007194ec:
007194EC  8B 3D C0 BE 85 00         MOV EDI,dword ptr [0x0085bec0]
007194F2  6A 00                     PUSH 0x0
007194F4  68 02 01 00 00            PUSH 0x102
007194F9  68 07 08 00 00            PUSH 0x807
007194FE  50                        PUSH EAX
007194FF  FF D7                     CALL EDI
00719501  85 C0                     TEST EAX,EAX
00719503  74 15                     JZ 0x0071951a
00719505  56                        PUSH ESI
00719506  50                        PUSH EAX
00719507  E8 84 07 00 00            CALL 0x00719c90
0071950C  83 C4 08                  ADD ESP,0x8
0071950F  B8 01 00 00 00            MOV EAX,0x1
00719514  5F                        POP EDI
00719515  5E                        POP ESI
00719516  8B E5                     MOV ESP,EBP
00719518  5D                        POP EBP
00719519  C3                        RET
LAB_0071951a:
0071951A  33 C0                     XOR EAX,EAX
0071951C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0071951F  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00719522  8D 55 F4                  LEA EDX,[EBP + -0xc]
00719525  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00719528  52                        PUSH EDX
00719529  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0071952C  8B 06                     MOV EAX,dword ptr [ESI]
0071952E  6A 01                     PUSH 0x1
00719530  68 06 08 00 00            PUSH 0x806
00719535  50                        PUSH EAX
00719536  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00719539  FF D7                     CALL EDI
0071953B  85 C0                     TEST EAX,EAX
0071953D  74 15                     JZ 0x00719554
0071953F  56                        PUSH ESI
00719540  50                        PUSH EAX
00719541  E8 4A 07 00 00            CALL 0x00719c90
00719546  83 C4 08                  ADD ESP,0x8
00719549  B8 01 00 00 00            MOV EAX,0x1
0071954E  5F                        POP EDI
0071954F  5E                        POP ESI
00719550  8B E5                     MOV ESP,EBP
00719552  5D                        POP EBP
00719553  C3                        RET
LAB_00719554:
00719554  5F                        POP EDI
00719555  33 C0                     XOR EAX,EAX
00719557  5E                        POP ESI
00719558  8B E5                     MOV ESP,EBP
0071955A  5D                        POP EBP
0071955B  C3                        RET
