STDcResourcC::sub_0057F2E0:
0057F2E0  55                        PUSH EBP
0057F2E1  8B EC                     MOV EBP,ESP
0057F2E3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0057F2E6  83 F8 FF                  CMP EAX,-0x1
0057F2E9  75 1B                     JNZ 0x0057f306
0057F2EB  8B 81 59 02 00 00         MOV EAX,dword ptr [ECX + 0x259]
0057F2F1  50                        PUSH EAX
0057F2F2  68 DD 00 00 00            PUSH 0xdd
0057F2F7  E8 FF 26 E8 FF            CALL 0x004019fb
0057F2FC  8B 0D 8C B0 7C 00         MOV ECX,dword ptr [0x007cb08c]
0057F302  50                        PUSH EAX
0057F303  51                        PUSH ECX
0057F304  EB 08                     JMP 0x0057f30e
LAB_0057f306:
0057F306  8B 15 90 B0 7C 00         MOV EDX,dword ptr [0x007cb090]
0057F30C  50                        PUSH EAX
0057F30D  52                        PUSH EDX
LAB_0057f30e:
0057F30E  68 70 16 81 00            PUSH 0x811670
0057F313  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0057F319  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0057F31C  83 C4 0C                  ADD ESP,0xc
0057F31F  85 C0                     TEST EAX,EAX
0057F321  74 3A                     JZ 0x0057f35d
0057F323  56                        PUSH ESI
0057F324  57                        PUSH EDI
0057F325  BF 60 B2 7C 00            MOV EDI,0x7cb260
0057F32A  83 C9 FF                  OR ECX,0xffffffff
0057F32D  33 C0                     XOR EAX,EAX
0057F32F  F2 AE                     SCASB.REPNE ES:EDI
0057F331  F7 D1                     NOT ECX
0057F333  2B F9                     SUB EDI,ECX
0057F335  8B F7                     MOV ESI,EDI
0057F337  8B D1                     MOV EDX,ECX
0057F339  BF 70 16 81 00            MOV EDI,0x811670
0057F33E  83 C9 FF                  OR ECX,0xffffffff
0057F341  F2 AE                     SCASB.REPNE ES:EDI
0057F343  8B CA                     MOV ECX,EDX
0057F345  4F                        DEC EDI
0057F346  C1 E9 02                  SHR ECX,0x2
0057F349  F3 A5                     MOVSD.REP ES:EDI,ESI
0057F34B  8B CA                     MOV ECX,EDX
0057F34D  B8 70 16 81 00            MOV EAX,0x811670
0057F352  83 E1 03                  AND ECX,0x3
0057F355  F3 A4                     MOVSB.REP ES:EDI,ESI
0057F357  5F                        POP EDI
0057F358  5E                        POP ESI
0057F359  5D                        POP EBP
0057F35A  C2 08 00                  RET 0x8
LAB_0057f35d:
0057F35D  B8 70 16 81 00            MOV EAX,0x811670
0057F362  5D                        POP EBP
0057F363  C2 08 00                  RET 0x8
