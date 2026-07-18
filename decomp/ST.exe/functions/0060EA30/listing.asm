FUN_0060ea30:
0060EA30  55                        PUSH EBP
0060EA31  8B EC                     MOV EBP,ESP
0060EA33  51                        PUSH ECX
0060EA34  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0060EA37  53                        PUSH EBX
0060EA38  56                        PUSH ESI
0060EA39  57                        PUSH EDI
0060EA3A  8B 42 10                  MOV EAX,dword ptr [EDX + 0x10]
0060EA3D  8B D9                     MOV EBX,ECX
0060EA3F  83 F8 03                  CMP EAX,0x3
0060EA42  0F 87 11 01 00 00         JA 0x0060eb59
0060EA48  0F 84 F9 00 00 00         JZ 0x0060eb47
0060EA4E  83 E8 00                  SUB EAX,0x0
0060EA51  0F 84 C9 00 00 00         JZ 0x0060eb20
0060EA57  83 E8 02                  SUB EAX,0x2
0060EA5A  0F 85 2F 01 00 00         JNZ 0x0060eb8f
0060EA60  8B 72 14                  MOV ESI,dword ptr [EDX + 0x14]
0060EA63  83 7E 0C 02               CMP dword ptr [ESI + 0xc],0x2
0060EA67  74 60                     JZ 0x0060eac9
0060EA69  8D 83 D5 01 00 00         LEA EAX,[EBX + 0x1d5]
0060EA6F  B9 05 00 00 00            MOV ECX,0x5
0060EA74  8B F8                     MOV EDI,EAX
0060EA76  F3 A5                     MOVSD.REP ES:EDI,ESI
0060EA78  8B 8B D9 01 00 00         MOV ECX,dword ptr [EBX + 0x1d9]
0060EA7E  C7 00 5E 01 00 00         MOV dword ptr [EAX],0x15e
0060EA84  89 4B 24                  MOV dword ptr [EBX + 0x24],ECX
0060EA87  8B 52 14                  MOV EDX,dword ptr [EDX + 0x14]
0060EA8A  52                        PUSH EDX
0060EA8B  8B CB                     MOV ECX,EBX
0060EA8D  E8 59 58 DF FF            CALL 0x004042eb
0060EA92  8B CB                     MOV ECX,EBX
0060EA94  E8 CD 5A DF FF            CALL 0x00404566
0060EA99  0F BF 83 ED 01 00 00      MOVSX EAX,word ptr [EBX + 0x1ed]
0060EAA0  0F BF 8B EB 01 00 00      MOVSX ECX,word ptr [EBX + 0x1eb]
0060EAA7  0F BF 93 E9 01 00 00      MOVSX EDX,word ptr [EBX + 0x1e9]
0060EAAE  50                        PUSH EAX
0060EAAF  51                        PUSH ECX
0060EAB0  52                        PUSH EDX
0060EAB1  8B CB                     MOV ECX,EBX
0060EAB3  E8 BD 69 DF FF            CALL 0x00405475
0060EAB8  5F                        POP EDI
0060EAB9  88 83 E9 02 00 00         MOV byte ptr [EBX + 0x2e9],AL
0060EABF  5E                        POP ESI
0060EAC0  33 C0                     XOR EAX,EAX
0060EAC2  5B                        POP EBX
0060EAC3  8B E5                     MOV ESP,EBP
0060EAC5  5D                        POP EBP
0060EAC6  C2 04 00                  RET 0x4
LAB_0060eac9:
0060EAC9  56                        PUSH ESI
0060EACA  8B CB                     MOV ECX,EBX
0060EACC  E8 28 45 DF FF            CALL 0x00402ff9
0060EAD1  B9 0B 00 00 00            MOV ECX,0xb
0060EAD6  33 C0                     XOR EAX,EAX
0060EAD8  8D BB EB 02 00 00         LEA EDI,[EBX + 0x2eb]
0060EADE  BE 09 00 00 00            MOV ESI,0x9
0060EAE3  F3 AB                     STOSD.REP ES:EDI
0060EAE5  AA                        STOSB ES:EDI
0060EAE6  8B 83 0C 02 00 00         MOV EAX,dword ptr [EBX + 0x20c]
0060EAEC  83 F8 07                  CMP EAX,0x7
0060EAEF  74 17                     JZ 0x0060eb08
0060EAF1  3B C6                     CMP EAX,ESI
0060EAF3  74 13                     JZ 0x0060eb08
0060EAF5  6A 00                     PUSH 0x0
0060EAF7  6A 01                     PUSH 0x1
0060EAF9  8B CB                     MOV ECX,EBX
0060EAFB  E8 93 6E DF FF            CALL 0x00405993
0060EB00  85 C0                     TEST EAX,EAX
0060EB02  0F 85 87 00 00 00         JNZ 0x0060eb8f
LAB_0060eb08:
0060EB08  8B CB                     MOV ECX,EBX
0060EB0A  E8 2E 5B DF FF            CALL 0x0040463d
0060EB0F  89 B3 0C 02 00 00         MOV dword ptr [EBX + 0x20c],ESI
0060EB15  5F                        POP EDI
0060EB16  5E                        POP ESI
0060EB17  33 C0                     XOR EAX,EAX
0060EB19  5B                        POP EBX
0060EB1A  8B E5                     MOV ESP,EBP
0060EB1C  5D                        POP EBP
0060EB1D  C2 04 00                  RET 0x4
LAB_0060eb20:
0060EB20  8B CB                     MOV ECX,EBX
0060EB22  E8 FE 59 DF FF            CALL 0x00404525
0060EB27  85 C0                     TEST EAX,EAX
0060EB29  74 64                     JZ 0x0060eb8f
0060EB2B  8B CB                     MOV ECX,EBX
0060EB2D  E8 0B 5B DF FF            CALL 0x0040463d
0060EB32  5F                        POP EDI
0060EB33  C7 83 0C 02 00 00 09 00 00 00  MOV dword ptr [EBX + 0x20c],0x9
0060EB3D  5E                        POP ESI
0060EB3E  33 C0                     XOR EAX,EAX
0060EB40  5B                        POP EBX
0060EB41  8B E5                     MOV ESP,EBP
0060EB43  5D                        POP EBP
0060EB44  C2 04 00                  RET 0x4
LAB_0060eb47:
0060EB47  8B CB                     MOV ECX,EBX
0060EB49  E8 4D 34 DF FF            CALL 0x00401f9b
0060EB4E  5F                        POP EDI
0060EB4F  5E                        POP ESI
0060EB50  33 C0                     XOR EAX,EAX
0060EB52  5B                        POP EBX
0060EB53  8B E5                     MOV ESP,EBP
0060EB55  5D                        POP EBP
0060EB56  C2 04 00                  RET 0x4
LAB_0060eb59:
0060EB59  3D 0F 01 00 00            CMP EAX,0x10f
0060EB5E  75 2F                     JNZ 0x0060eb8f
0060EB60  8D 45 08                  LEA EAX,[EBP + 0x8]
0060EB63  8B CB                     MOV ECX,EBX
0060EB65  50                        PUSH EAX
0060EB66  E8 0A 37 DF FF            CALL 0x00402275
0060EB6B  85 C0                     TEST EAX,EAX
0060EB6D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0060EB70  74 1D                     JZ 0x0060eb8f
0060EB72  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0060EB75  8B 53 18                  MOV EDX,dword ptr [EBX + 0x18]
0060EB78  51                        PUSH ECX
0060EB79  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0060EB7F  50                        PUSH EAX
0060EB80  52                        PUSH EDX
0060EB81  E8 73 3A DF FF            CALL 0x004025f9
0060EB86  8D 45 FC                  LEA EAX,[EBP + -0x4]
0060EB89  50                        PUSH EAX
0060EB8A  E8 D1 C4 09 00            CALL 0x006ab060
LAB_0060eb8f:
0060EB8F  5F                        POP EDI
0060EB90  5E                        POP ESI
0060EB91  33 C0                     XOR EAX,EAX
0060EB93  5B                        POP EBX
0060EB94  8B E5                     MOV ESP,EBP
0060EB96  5D                        POP EBP
0060EB97  C2 04 00                  RET 0x4
