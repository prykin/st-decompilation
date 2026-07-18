FUN_00733930:
00733930  55                        PUSH EBP
00733931  8B EC                     MOV EBP,ESP
00733933  83 EC 0C                  SUB ESP,0xc
00733936  83 7D 0C 04               CMP dword ptr [EBP + 0xc],0x4
0073393A  74 06                     JZ 0x00733942
0073393C  83 7D 0C 03               CMP dword ptr [EBP + 0xc],0x3
00733940  75 05                     JNZ 0x00733947
LAB_00733942:
00733942  E9 42 01 00 00            JMP 0x00733a89
LAB_00733947:
00733947  83 7D 08 02               CMP dword ptr [EBP + 0x8],0x2
0073394B  74 16                     JZ 0x00733963
0073394D  83 7D 08 15               CMP dword ptr [EBP + 0x8],0x15
00733951  74 10                     JZ 0x00733963
00733953  83 7D 08 16               CMP dword ptr [EBP + 0x8],0x16
00733957  74 0A                     JZ 0x00733963
00733959  83 7D 08 0F               CMP dword ptr [EBP + 0x8],0xf
0073395D  0F 85 B8 00 00 00         JNZ 0x00733a1b
LAB_00733963:
00733963  83 7D 08 02               CMP dword ptr [EBP + 0x8],0x2
00733967  74 06                     JZ 0x0073396f
00733969  83 7D 08 15               CMP dword ptr [EBP + 0x8],0x15
0073396D  75 37                     JNZ 0x007339a6
LAB_0073396f:
0073396F  83 3D F4 71 85 00 00      CMP dword ptr [0x008571f4],0x0
00733976  75 2E                     JNZ 0x007339a6
00733978  6A 01                     PUSH 0x1
0073397A  68 D0 3A 73 00            PUSH 0x733ad0
0073397F  FF 15 F4 BB 85 00         CALL dword ptr [0x0085bbf4]
00733985  83 F8 01                  CMP EAX,0x1
00733988  75 0C                     JNZ 0x00733996
0073398A  C7 05 F4 71 85 00 01 00 00 00  MOV dword ptr [0x008571f4],0x1
00733994  EB 10                     JMP 0x007339a6
LAB_00733996:
00733996  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
0073399C  A3 4C 71 85 00            MOV [0x0085714c],EAX
007339A1  E9 E3 00 00 00            JMP 0x00733a89
LAB_007339a6:
007339A6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007339A9  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
007339AC  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
007339AF  83 E9 02                  SUB ECX,0x2
007339B2  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
007339B5  83 7D F4 14               CMP dword ptr [EBP + -0xc],0x14
007339B9  77 5E                     JA 0x00733a19
007339BB  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
007339BE  33 D2                     XOR EDX,EDX
007339C0  8A 90 AE 3A 73 00         MOV DL,byte ptr [EAX + 0x733aae]
switchD_007339c6::switchD:
007339C6  FF 24 95 9A 3A 73 00      JMP dword ptr [EDX*0x4 + 0x733a9a]
switchD_007339c6::caseD_2:
007339CD  8B 0D E4 71 85 00         MOV ECX,dword ptr [0x008571e4]
007339D3  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
007339D6  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
007339D9  89 15 E4 71 85 00         MOV dword ptr [0x008571e4],EDX
007339DF  EB 38                     JMP 0x00733a19
switchD_007339c6::caseD_15:
007339E1  A1 E8 71 85 00            MOV EAX,[0x008571e8]
007339E6  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
007339E9  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
007339EC  89 0D E8 71 85 00         MOV dword ptr [0x008571e8],ECX
007339F2  EB 25                     JMP 0x00733a19
switchD_007339c6::caseD_16:
007339F4  8B 15 EC 71 85 00         MOV EDX,dword ptr [0x008571ec]
007339FA  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
007339FD  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00733A00  A3 EC 71 85 00            MOV [0x008571ec],EAX
00733A05  EB 12                     JMP 0x00733a19
switchD_007339c6::caseD_f:
00733A07  8B 0D F0 71 85 00         MOV ECX,dword ptr [0x008571f0]
00733A0D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00733A10  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00733A13  89 15 F0 71 85 00         MOV dword ptr [0x008571f0],EDX
switchD_007339c6::caseD_3:
00733A19  EB 69                     JMP 0x00733a84
LAB_00733a1b:
00733A1B  83 7D 08 08               CMP dword ptr [EBP + 0x8],0x8
00733A1F  74 0E                     JZ 0x00733a2f
00733A21  83 7D 08 04               CMP dword ptr [EBP + 0x8],0x4
00733A25  74 08                     JZ 0x00733a2f
00733A27  83 7D 08 0B               CMP dword ptr [EBP + 0x8],0xb
00733A2B  74 02                     JZ 0x00733a2f
00733A2D  EB 5A                     JMP 0x00733a89
LAB_00733a2f:
00733A2F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00733A32  50                        PUSH EAX
00733A33  E8 C8 02 00 00            CALL 0x00733d00
00733A38  83 C4 04                  ADD ESP,0x4
00733A3B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00733A3E  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
00733A42  75 02                     JNZ 0x00733a46
00733A44  EB 43                     JMP 0x00733a89
LAB_00733a46:
00733A46  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00733A49  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
00733A4C  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_00733a4f:
00733A4F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00733A52  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00733A55  3B 4D 08                  CMP ECX,dword ptr [EBP + 0x8]
00733A58  75 2A                     JNZ 0x00733a84
00733A5A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00733A5D  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00733A60  89 42 08                  MOV dword ptr [EDX + 0x8],EAX
00733A63  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00733A66  83 C1 0C                  ADD ECX,0xc
00733A69  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00733A6C  8B 15 F0 1F 7F 00         MOV EDX,dword ptr [0x007f1ff0]
00733A72  6B D2 0C                  IMUL EDX,EDX,0xc
00733A75  81 C2 70 1F 7F 00         ADD EDX,0x7f1f70
00733A7B  39 55 FC                  CMP dword ptr [EBP + -0x4],EDX
00733A7E  72 02                     JC 0x00733a82
00733A80  EB 02                     JMP 0x00733a84
LAB_00733a82:
00733A82  EB CB                     JMP 0x00733a4f
LAB_00733a84:
00733A84  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00733A87  EB 0D                     JMP 0x00733a96
LAB_00733a89:
00733A89  C7 05 48 71 85 00 16 00 00 00  MOV dword ptr [0x00857148],0x16
00733A93  83 C8 FF                  OR EAX,0xffffffff
LAB_00733a96:
00733A96  8B E5                     MOV ESP,EBP
00733A98  5D                        POP EBP
00733A99  C3                        RET
