FUN_0049b4c0:
0049B4C0  55                        PUSH EBP
0049B4C1  8B EC                     MOV EBP,ESP
0049B4C3  83 EC 68                  SUB ESP,0x68
0049B4C6  8B 41 29                  MOV EAX,dword ptr [ECX + 0x29]
0049B4C9  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
0049B4CF  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0049B4D2  53                        PUSH EBX
0049B4D3  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0049B4D6  56                        PUSH ESI
0049B4D7  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0049B4DA  57                        PUSH EDI
0049B4DB  8D 4D 9C                  LEA ECX,[EBP + -0x64]
0049B4DE  8D 45 98                  LEA EAX,[EBP + -0x68]
0049B4E1  6A 00                     PUSH 0x0
0049B4E3  51                        PUSH ECX
0049B4E4  89 55 98                  MOV dword ptr [EBP + -0x68],EDX
0049B4E7  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0049B4EC  E8 FF 22 29 00            CALL 0x0072d7f0
0049B4F1  8B F0                     MOV ESI,EAX
0049B4F3  83 C4 08                  ADD ESP,0x8
0049B4F6  85 F6                     TEST ESI,ESI
0049B4F8  0F 85 DE 01 00 00         JNZ 0x0049b6dc
0049B4FE  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0049B501  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
0049B504  85 D2                     TEST EDX,EDX
0049B506  74 09                     JZ 0x0049b511
0049B508  83 FA 01                  CMP EDX,0x1
0049B50B  0F 85 EC 00 00 00         JNZ 0x0049b5fd
LAB_0049b511:
0049B511  B9 15 00 00 00            MOV ECX,0x15
0049B516  33 C0                     XOR EAX,EAX
0049B518  8D BB 89 00 00 00         LEA EDI,[EBX + 0x89]
0049B51E  F3 AB                     STOSD.REP ES:EDI
0049B520  8B 83 FF 00 00 00         MOV EAX,dword ptr [EBX + 0xff]
0049B526  33 FF                     XOR EDI,EDI
0049B528  89 83 22 02 00 00         MOV dword ptr [EBX + 0x222],EAX
0049B52E  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0049B531  3B C7                     CMP EAX,EDI
0049B533  89 7B 65                  MOV dword ptr [EBX + 0x65],EDI
0049B536  0F 86 BA 00 00 00         JBE 0x0049b5f6
0049B53C  33 D2                     XOR EDX,EDX
LAB_0049b53e:
0049B53E  8D 4D F0                  LEA ECX,[EBP + -0x10]
0049B541  51                        PUSH ECX
0049B542  8B 4B 29                  MOV ECX,dword ptr [EBX + 0x29]
0049B545  E8 26 17 21 00            CALL 0x006acc70
0049B54A  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0049B54D  66 3D FF FF               CMP AX,0xffff
0049B551  0F 84 88 00 00 00         JZ 0x0049b5df
0049B557  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
0049B55A  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049B560  6A 01                     PUSH 0x1
0049B562  50                        PUSH EAX
0049B563  52                        PUSH EDX
0049B564  E8 51 73 F6 FF            CALL 0x004028ba
0049B569  8B F0                     MOV ESI,EAX
0049B56B  85 F6                     TEST ESI,ESI
0049B56D  75 1A                     JNZ 0x0049b589
0049B56F  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0049B574  68 20 07 00 00            PUSH 0x720
0049B579  68 3C BE 7A 00            PUSH 0x7abe3c
0049B57E  50                        PUSH EAX
0049B57F  68 04 00 FE AF            PUSH 0xaffe0004
0049B584  E8 B7 A8 20 00            CALL 0x006a5e40
LAB_0049b589:
0049B589  8D 4D FA                  LEA ECX,[EBP + -0x6]
0049B58C  8D 55 FE                  LEA EDX,[EBP + -0x2]
0049B58F  51                        PUSH ECX
0049B590  8D 45 FC                  LEA EAX,[EBP + -0x4]
0049B593  52                        PUSH EDX
0049B594  50                        PUSH EAX
0049B595  8B CE                     MOV ECX,ESI
0049B597  E8 29 63 F6 FF            CALL 0x004018c5
0049B59C  0F BF 55 FE               MOVSX EDX,word ptr [EBP + -0x2]
0049B5A0  8B 8B 22 02 00 00         MOV ECX,dword ptr [EBX + 0x222]
0049B5A6  0F BF 45 FC               MOVSX EAX,word ptr [EBP + -0x4]
0049B5AA  51                        PUSH ECX
0049B5AB  52                        PUSH EDX
0049B5AC  50                        PUSH EAX
0049B5AD  8B CE                     MOV ECX,ESI
0049B5AF  E8 B7 99 F6 FF            CALL 0x00404f6b
0049B5B4  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0049B5BA  83 C8 FF                  OR EAX,0xffffffff
0049B5BD  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0049B5C3  66 89 45 E0               MOV word ptr [EBP + -0x20],AX
0049B5C7  66 89 45 E2               MOV word ptr [EBP + -0x1e],AX
0049B5CB  66 89 45 E4               MOV word ptr [EBP + -0x1c],AX
0049B5CF  8D 45 DC                  LEA EAX,[EBP + -0x24]
0049B5D2  8B CE                     MOV ECX,ESI
0049B5D4  50                        PUSH EAX
0049B5D5  6A 01                     PUSH 0x1
0049B5D7  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
0049B5DA  E8 47 6B F6 FF            CALL 0x00402126
LAB_0049b5df:
0049B5DF  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0049B5E2  47                        INC EDI
0049B5E3  8B D7                     MOV EDX,EDI
0049B5E5  81 E2 FF FF 00 00         AND EDX,0xffff
0049B5EB  3B D0                     CMP EDX,EAX
0049B5ED  0F 82 4B FF FF FF         JC 0x0049b53e
0049B5F3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
LAB_0049b5f6:
0049B5F6  C7 45 F4 02 00 00 00      MOV dword ptr [EBP + -0xc],0x2
LAB_0049b5fd:
0049B5FD  83 FA 02                  CMP EDX,0x2
0049B600  0F 85 C2 00 00 00         JNZ 0x0049b6c8
0049B606  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0049B60C  33 D2                     XOR EDX,EDX
0049B60E  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
0049B614  B9 03 00 00 00            MOV ECX,0x3
0049B619  F7 F1                     DIV ECX
0049B61B  85 D2                     TEST EDX,EDX
0049B61D  0F 85 9E 00 00 00         JNZ 0x0049b6c1
0049B623  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0049B626  33 FF                     XOR EDI,EDI
0049B628  3B C2                     CMP EAX,EDX
0049B62A  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0049B62D  0F 86 95 00 00 00         JBE 0x0049b6c8
LAB_0049b633:
0049B633  8B 4B 29                  MOV ECX,dword ptr [EBX + 0x29]
0049B636  8D 45 F0                  LEA EAX,[EBP + -0x10]
0049B639  50                        PUSH EAX
0049B63A  E8 31 16 21 00            CALL 0x006acc70
0049B63F  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0049B642  66 3D FF FF               CMP AX,0xffff
0049B646  74 55                     JZ 0x0049b69d
0049B648  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
0049B64B  6A 01                     PUSH 0x1
0049B64D  50                        PUSH EAX
0049B64E  51                        PUSH ECX
0049B64F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049B655  E8 60 72 F6 FF            CALL 0x004028ba
0049B65A  8B F0                     MOV ESI,EAX
0049B65C  85 F6                     TEST ESI,ESI
0049B65E  75 1B                     JNZ 0x0049b67b
0049B660  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0049B666  68 32 07 00 00            PUSH 0x732
0049B66B  68 3C BE 7A 00            PUSH 0x7abe3c
0049B670  52                        PUSH EDX
0049B671  68 04 00 FE AF            PUSH 0xaffe0004
0049B676  E8 C5 A7 20 00            CALL 0x006a5e40
LAB_0049b67b:
0049B67B  8B CE                     MOV ECX,ESI
0049B67D  E8 FA 82 F6 FF            CALL 0x0040397c
0049B682  85 C0                     TEST EAX,EAX
0049B684  75 3B                     JNZ 0x0049b6c1
0049B686  8B CE                     MOV ECX,ESI
0049B688  E8 4F 78 F6 FF            CALL 0x00402edc
0049B68D  83 F8 01                  CMP EAX,0x1
0049B690  74 2F                     JZ 0x0049b6c1
0049B692  8B CE                     MOV ECX,ESI
0049B694  E8 43 78 F6 FF            CALL 0x00402edc
0049B699  85 C0                     TEST EAX,EAX
0049B69B  74 24                     JZ 0x0049b6c1
LAB_0049b69d:
0049B69D  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0049B6A0  47                        INC EDI
0049B6A1  8B D7                     MOV EDX,EDI
0049B6A3  81 E2 FF FF 00 00         AND EDX,0xffff
0049B6A9  3B D0                     CMP EDX,EAX
0049B6AB  72 86                     JC 0x0049b633
0049B6AD  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
0049B6B0  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0049B6B5  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0049B6B8  5F                        POP EDI
0049B6B9  5E                        POP ESI
0049B6BA  5B                        POP EBX
0049B6BB  8B E5                     MOV ESP,EBP
0049B6BD  5D                        POP EBP
0049B6BE  C2 04 00                  RET 0x4
LAB_0049b6c1:
0049B6C1  C7 45 F4 02 00 00 00      MOV dword ptr [EBP + -0xc],0x2
LAB_0049b6c8:
0049B6C8  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
0049B6CB  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0049B6D0  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0049B6D3  5F                        POP EDI
0049B6D4  5E                        POP ESI
0049B6D5  5B                        POP EBX
0049B6D6  8B E5                     MOV ESP,EBP
0049B6D8  5D                        POP EBP
0049B6D9  C2 04 00                  RET 0x4
LAB_0049b6dc:
0049B6DC  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
0049B6DF  68 74 BF 7A 00            PUSH 0x7abf74
0049B6E4  68 CC 4C 7A 00            PUSH 0x7a4ccc
0049B6E9  56                        PUSH ESI
0049B6EA  6A 00                     PUSH 0x0
0049B6EC  68 3C 07 00 00            PUSH 0x73c
0049B6F1  68 3C BE 7A 00            PUSH 0x7abe3c
0049B6F6  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0049B6FC  E8 CF 1D 21 00            CALL 0x006ad4d0
0049B701  83 C4 18                  ADD ESP,0x18
0049B704  85 C0                     TEST EAX,EAX
0049B706  74 01                     JZ 0x0049b709
0049B708  CC                        INT3
LAB_0049b709:
0049B709  68 3D 07 00 00            PUSH 0x73d
0049B70E  68 3C BE 7A 00            PUSH 0x7abe3c
0049B713  6A 00                     PUSH 0x0
0049B715  56                        PUSH ESI
0049B716  E8 25 A7 20 00            CALL 0x006a5e40
0049B71B  5F                        POP EDI
0049B71C  5E                        POP ESI
0049B71D  83 C8 FF                  OR EAX,0xffffffff
0049B720  5B                        POP EBX
0049B721  8B E5                     MOV ESP,EBP
0049B723  5D                        POP EBP
0049B724  C2 04 00                  RET 0x4
