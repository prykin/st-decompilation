FUN_005335e0:
005335E0  55                        PUSH EBP
005335E1  8B EC                     MOV EBP,ESP
005335E3  83 EC 50                  SUB ESP,0x50
005335E6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005335EB  53                        PUSH EBX
005335EC  56                        PUSH ESI
005335ED  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005335F0  57                        PUSH EDI
005335F1  8D 55 B4                  LEA EDX,[EBP + -0x4c]
005335F4  8D 4D B0                  LEA ECX,[EBP + -0x50]
005335F7  6A 00                     PUSH 0x0
005335F9  52                        PUSH EDX
005335FA  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
005335FD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00533603  E8 E8 A1 1F 00            CALL 0x0072d7f0
00533608  83 C4 08                  ADD ESP,0x8
0053360B  85 C0                     TEST EAX,EAX
0053360D  0F 85 C1 01 00 00         JNZ 0x005337d4
00533613  80 3D 83 87 80 00 03      CMP byte ptr [0x00808783],0x3
0053361A  0F 85 BD 00 00 00         JNZ 0x005336dd
00533620  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00533623  83 C9 FF                  OR ECX,0xffffffff
00533626  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0053362D  8D 98 F5 01 00 00         LEA EBX,[EAX + 0x1f5]
00533633  33 C0                     XOR EAX,EAX
00533635  8B FB                     MOV EDI,EBX
00533637  F2 AE                     SCASB.REPNE ES:EDI
00533639  F7 D1                     NOT ECX
0053363B  49                        DEC ECX
0053363C  8B F9                     MOV EDI,ECX
0053363E  47                        INC EDI
0053363F  8D 47 0D                  LEA EAX,[EDI + 0xd]
00533642  50                        PUSH EAX
00533643  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00533646  E8 C5 75 17 00            CALL 0x006aac10
0053364B  85 C0                     TEST EAX,EAX
0053364D  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00533650  8B F0                     MOV ESI,EAX
00533652  74 5E                     JZ 0x005336b2
00533654  46                        INC ESI
00533655  C6 00 02                  MOV byte ptr [EAX],0x2
00533658  89 3E                     MOV dword ptr [ESI],EDI
0053365A  8B 0D BE 87 80 00         MOV ECX,dword ptr [0x008087be]
00533660  83 C6 04                  ADD ESI,0x4
00533663  89 0E                     MOV dword ptr [ESI],ECX
00533665  83 C6 04                  ADD ESI,0x4
00533668  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
0053366E  89 06                     MOV dword ptr [ESI],EAX
00533670  8B FB                     MOV EDI,EBX
00533672  83 C9 FF                  OR ECX,0xffffffff
00533675  33 C0                     XOR EAX,EAX
00533677  F2 AE                     SCASB.REPNE ES:EDI
00533679  F7 D1                     NOT ECX
0053367B  2B F9                     SUB EDI,ECX
0053367D  8D 56 04                  LEA EDX,[ESI + 0x4]
00533680  8B C1                     MOV EAX,ECX
00533682  8B F7                     MOV ESI,EDI
00533684  8B FA                     MOV EDI,EDX
00533686  C1 E9 02                  SHR ECX,0x2
00533689  F3 A5                     MOVSD.REP ES:EDI,ESI
0053368B  8B C8                     MOV ECX,EAX
0053368D  83 E1 03                  AND ECX,0x3
00533690  F3 A4                     MOVSB.REP ES:EDI,ESI
00533692  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00533695  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00533698  51                        PUSH ECX
00533699  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0053369F  6A 01                     PUSH 0x1
005336A1  52                        PUSH EDX
005336A2  6A 32                     PUSH 0x32
005336A4  E8 8A 05 ED FF            CALL 0x00403c33
005336A9  8D 45 F8                  LEA EAX,[EBP + -0x8]
005336AC  50                        PUSH EAX
005336AD  E8 AE 79 17 00            CALL 0x006ab060
LAB_005336b2:
005336B2  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
LAB_005336b5:
005336B5  8B 02                     MOV EAX,dword ptr [EDX]
005336B7  8D 4A 18                  LEA ECX,[EDX + 0x18]
005336BA  51                        PUSH ECX
005336BB  8B CA                     MOV ECX,EDX
005336BD  C7 42 28 01 C0 00 00      MOV dword ptr [EDX + 0x28],0xc001
005336C4  C7 42 34 00 00 00 00      MOV dword ptr [EDX + 0x34],0x0
005336CB  FF 10                     CALL dword ptr [EAX]
005336CD  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
005336D0  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005336D6  5F                        POP EDI
005336D7  5E                        POP ESI
005336D8  5B                        POP EBX
005336D9  8B E5                     MOV ESP,EBP
005336DB  5D                        POP EBP
005336DC  C3                        RET
LAB_005336dd:
005336DD  83 C9 FF                  OR ECX,0xffffffff
005336E0  BF 80 76 80 00            MOV EDI,0x807680
005336E5  33 C0                     XOR EAX,EAX
005336E7  68 22 F0 80 00            PUSH 0x80f022
005336EC  F2 AE                     SCASB.REPNE ES:EDI
005336EE  F7 D1                     NOT ECX
005336F0  2B F9                     SUB EDI,ECX
005336F2  68 22 F0 80 00            PUSH 0x80f022
005336F7  8B D1                     MOV EDX,ECX
005336F9  8B F7                     MOV ESI,EDI
005336FB  BF 22 F0 80 00            MOV EDI,0x80f022
00533700  C1 E9 02                  SHR ECX,0x2
00533703  F3 A5                     MOVSD.REP ES:EDI,ESI
00533705  8B CA                     MOV ECX,EDX
00533707  83 E1 03                  AND ECX,0x3
0053370A  F3 A4                     MOVSB.REP ES:EDI,ESI
0053370C  8B 3D EC AC 79 00         MOV EDI,dword ptr [0x0079acec]
00533712  83 C9 FF                  OR ECX,0xffffffff
00533715  F2 AE                     SCASB.REPNE ES:EDI
00533717  F7 D1                     NOT ECX
00533719  2B F9                     SUB EDI,ECX
0053371B  8B F7                     MOV ESI,EDI
0053371D  8B D1                     MOV EDX,ECX
0053371F  BF 22 F0 80 00            MOV EDI,0x80f022
00533724  83 C9 FF                  OR ECX,0xffffffff
00533727  F2 AE                     SCASB.REPNE ES:EDI
00533729  8B CA                     MOV ECX,EDX
0053372B  4F                        DEC EDI
0053372C  C1 E9 02                  SHR ECX,0x2
0053372F  F3 A5                     MOVSD.REP ES:EDI,ESI
00533731  8B CA                     MOV ECX,EDX
00533733  83 E1 03                  AND ECX,0x3
00533736  F3 A4                     MOVSB.REP ES:EDI,ESI
00533738  BF DD 7D 80 00            MOV EDI,0x807ddd
0053373D  83 C9 FF                  OR ECX,0xffffffff
00533740  F2 AE                     SCASB.REPNE ES:EDI
00533742  F7 D1                     NOT ECX
00533744  2B F9                     SUB EDI,ECX
00533746  8B F7                     MOV ESI,EDI
00533748  8B D1                     MOV EDX,ECX
0053374A  BF 22 F0 80 00            MOV EDI,0x80f022
0053374F  83 C9 FF                  OR ECX,0xffffffff
00533752  F2 AE                     SCASB.REPNE ES:EDI
00533754  8B CA                     MOV ECX,EDX
00533756  4F                        DEC EDI
00533757  C1 E9 02                  SHR ECX,0x2
0053375A  F3 A5                     MOVSD.REP ES:EDI,ESI
0053375C  8B CA                     MOV ECX,EDX
0053375E  83 E1 03                  AND ECX,0x3
00533761  F3 A4                     MOVSB.REP ES:EDI,ESI
00533763  E8 18 4B 18 00            CALL 0x006b8280
00533768  8B 3D 00 AD 79 00         MOV EDI,dword ptr [0x0079ad00]
0053376E  83 C9 FF                  OR ECX,0xffffffff
00533771  33 C0                     XOR EAX,EAX
00533773  F2 AE                     SCASB.REPNE ES:EDI
00533775  F7 D1                     NOT ECX
00533777  2B F9                     SUB EDI,ECX
00533779  8B F7                     MOV ESI,EDI
0053377B  8B D1                     MOV EDX,ECX
0053377D  BF 22 F0 80 00            MOV EDI,0x80f022
00533782  83 C9 FF                  OR ECX,0xffffffff
00533785  F2 AE                     SCASB.REPNE ES:EDI
00533787  8B CA                     MOV ECX,EDX
00533789  4F                        DEC EDI
0053378A  C1 E9 02                  SHR ECX,0x2
0053378D  F3 A5                     MOVSD.REP ES:EDI,ESI
0053378F  8B CA                     MOV ECX,EDX
00533791  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00533794  83 E1 03                  AND ECX,0x3
00533797  F3 A4                     MOVSB.REP ES:EDI,ESI
00533799  8D BA F5 01 00 00         LEA EDI,[EDX + 0x1f5]
0053379F  83 C9 FF                  OR ECX,0xffffffff
005337A2  F2 AE                     SCASB.REPNE ES:EDI
005337A4  F7 D1                     NOT ECX
005337A6  2B F9                     SUB EDI,ECX
005337A8  8B F7                     MOV ESI,EDI
005337AA  8B D9                     MOV EBX,ECX
005337AC  BF 22 F0 80 00            MOV EDI,0x80f022
005337B1  83 C9 FF                  OR ECX,0xffffffff
005337B4  F2 AE                     SCASB.REPNE ES:EDI
005337B6  4F                        DEC EDI
005337B7  8B CB                     MOV ECX,EBX
005337B9  C1 E9 02                  SHR ECX,0x2
005337BC  F3 A5                     MOVSD.REP ES:EDI,ESI
005337BE  8B CB                     MOV ECX,EBX
005337C0  83 E1 03                  AND ECX,0x3
005337C3  F3 A4                     MOVSB.REP ES:EDI,ESI
005337C5  C7 05 94 87 80 00 01 00 00 00  MOV dword ptr [0x00808794],0x1
005337CF  E9 E1 FE FF FF            JMP 0x005336b5
LAB_005337d4:
005337D4  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
005337D7  5F                        POP EDI
005337D8  5E                        POP ESI
005337D9  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005337DE  5B                        POP EBX
005337DF  8B E5                     MOV ESP,EBP
005337E1  5D                        POP EBP
005337E2  C3                        RET
