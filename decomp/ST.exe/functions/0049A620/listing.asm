STGroupBoatC::GrpMove:
0049A620  55                        PUSH EBP
0049A621  8B EC                     MOV EBP,ESP
0049A623  83 EC 60                  SUB ESP,0x60
0049A626  8B 41 29                  MOV EAX,dword ptr [ECX + 0x29]
0049A629  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
0049A62F  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0049A632  53                        PUSH EBX
0049A633  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0049A636  56                        PUSH ESI
0049A637  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0049A63A  33 DB                     XOR EBX,EBX
0049A63C  57                        PUSH EDI
0049A63D  8D 4D A4                  LEA ECX,[EBP + -0x5c]
0049A640  8D 45 A0                  LEA EAX,[EBP + -0x60]
0049A643  53                        PUSH EBX
0049A644  51                        PUSH ECX
0049A645  89 55 A0                  MOV dword ptr [EBP + -0x60],EDX
0049A648  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0049A64D  E8 9E 31 29 00            CALL 0x0072d7f0
0049A652  8B F0                     MOV ESI,EAX
0049A654  83 C4 08                  ADD ESP,0x8
0049A657  3B F3                     CMP ESI,EBX
0049A659  0F 85 EE 01 00 00         JNZ 0x0049a84d
0049A65F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0049A662  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0049A665  3B C3                     CMP EAX,EBX
0049A667  74 09                     JZ 0x0049a672
0049A669  83 F8 01                  CMP EAX,0x1
0049A66C  0F 85 FC 00 00 00         JNZ 0x0049a76e
LAB_0049a672:
0049A672  B9 15 00 00 00            MOV ECX,0x15
0049A677  33 C0                     XOR EAX,EAX
0049A679  8D BE 89 00 00 00         LEA EDI,[ESI + 0x89]
0049A67F  F3 AB                     STOSD.REP ES:EDI
0049A681  0F BF 96 DD 00 00 00      MOVSX EDX,word ptr [ESI + 0xdd]
0049A688  0F BF 8E E1 00 00 00      MOVSX ECX,word ptr [ESI + 0xe1]
0049A68F  0F BF 86 DF 00 00 00      MOVSX EAX,word ptr [ESI + 0xdf]
0049A696  89 56 3D                  MOV dword ptr [ESI + 0x3d],EDX
0049A699  8B 96 E3 00 00 00         MOV EDX,dword ptr [ESI + 0xe3]
0049A69F  89 4E 45                  MOV dword ptr [ESI + 0x45],ECX
0049A6A2  8B CE                     MOV ECX,ESI
0049A6A4  89 5E 65                  MOV dword ptr [ESI + 0x65],EBX
0049A6A7  89 46 41                  MOV dword ptr [ESI + 0x41],EAX
0049A6AA  89 96 0E 03 00 00         MOV dword ptr [ESI + 0x30e],EDX
0049A6B0  E8 00 87 F6 FF            CALL 0x00402db5
0049A6B5  8B 4E 45                  MOV ECX,dword ptr [ESI + 0x45]
0049A6B8  8B 56 41                  MOV EDX,dword ptr [ESI + 0x41]
0049A6BB  8B F8                     MOV EDI,EAX
0049A6BD  8B 86 0E 03 00 00         MOV EAX,dword ptr [ESI + 0x30e]
0049A6C3  50                        PUSH EAX
0049A6C4  8B 46 3D                  MOV EAX,dword ptr [ESI + 0x3d]
0049A6C7  51                        PUSH ECX
0049A6C8  52                        PUSH EDX
0049A6C9  50                        PUSH EAX
0049A6CA  57                        PUSH EDI
0049A6CB  8B CE                     MOV ECX,ESI
0049A6CD  E8 A9 B6 F6 FF            CALL 0x00405d7b
0049A6D2  57                        PUSH EDI
0049A6D3  E8 38 3A 21 00            CALL 0x006ae110
0049A6D8  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0049A6DE  83 C8 FF                  OR EAX,0xffffffff
0049A6E1  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0049A6E7  66 89 45 E8               MOV word ptr [EBP + -0x18],AX
0049A6EB  66 89 45 EA               MOV word ptr [EBP + -0x16],AX
0049A6EF  66 89 45 EC               MOV word ptr [EBP + -0x14],AX
0049A6F3  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0049A6F6  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0049A6F9  85 C0                     TEST EAX,EAX
0049A6FB  76 67                     JBE 0x0049a764
0049A6FD  33 D2                     XOR EDX,EDX
LAB_0049a6ff:
0049A6FF  8B 4E 29                  MOV ECX,dword ptr [ESI + 0x29]
0049A702  8D 45 F8                  LEA EAX,[EBP + -0x8]
0049A705  50                        PUSH EAX
0049A706  E8 65 25 21 00            CALL 0x006acc70
0049A70B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0049A70E  66 3D FF FF               CMP AX,0xffff
0049A712  74 40                     JZ 0x0049a754
0049A714  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
0049A717  6A 01                     PUSH 0x1
0049A719  50                        PUSH EAX
0049A71A  51                        PUSH ECX
0049A71B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049A721  E8 94 81 F6 FF            CALL 0x004028ba
0049A726  8B F8                     MOV EDI,EAX
0049A728  85 FF                     TEST EDI,EDI
0049A72A  75 1B                     JNZ 0x0049a747
0049A72C  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0049A732  68 29 06 00 00            PUSH 0x629
0049A737  68 3C BE 7A 00            PUSH 0x7abe3c
0049A73C  52                        PUSH EDX
0049A73D  68 04 00 FE AF            PUSH 0xaffe0004
0049A742  E8 F9 B6 20 00            CALL 0x006a5e40
LAB_0049a747:
0049A747  8D 45 E4                  LEA EAX,[EBP + -0x1c]
0049A74A  8B CF                     MOV ECX,EDI
0049A74C  50                        PUSH EAX
0049A74D  6A 01                     PUSH 0x1
0049A74F  E8 D2 79 F6 FF            CALL 0x00402126
LAB_0049a754:
0049A754  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0049A757  43                        INC EBX
0049A758  8B D3                     MOV EDX,EBX
0049A75A  81 E2 FF FF 00 00         AND EDX,0xffff
0049A760  3B D0                     CMP EDX,EAX
0049A762  72 9B                     JC 0x0049a6ff
LAB_0049a764:
0049A764  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0049A767  C7 45 FC 02 00 00 00      MOV dword ptr [EBP + -0x4],0x2
LAB_0049a76e:
0049A76E  83 F8 02                  CMP EAX,0x2
0049A771  0F 85 C2 00 00 00         JNZ 0x0049a839
0049A777  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0049A77D  33 D2                     XOR EDX,EDX
0049A77F  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
0049A785  B9 03 00 00 00            MOV ECX,0x3
0049A78A  F7 F1                     DIV ECX
0049A78C  85 D2                     TEST EDX,EDX
0049A78E  0F 85 9E 00 00 00         JNZ 0x0049a832
0049A794  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0049A797  33 DB                     XOR EBX,EBX
0049A799  85 C0                     TEST EAX,EAX
0049A79B  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0049A79E  0F 86 95 00 00 00         JBE 0x0049a839
LAB_0049a7a4:
0049A7A4  8B 4E 29                  MOV ECX,dword ptr [ESI + 0x29]
0049A7A7  8D 45 F8                  LEA EAX,[EBP + -0x8]
0049A7AA  50                        PUSH EAX
0049A7AB  E8 C0 24 21 00            CALL 0x006acc70
0049A7B0  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0049A7B3  66 3D FF FF               CMP AX,0xffff
0049A7B7  74 55                     JZ 0x0049a80e
0049A7B9  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
0049A7BC  6A 01                     PUSH 0x1
0049A7BE  50                        PUSH EAX
0049A7BF  51                        PUSH ECX
0049A7C0  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049A7C6  E8 EF 80 F6 FF            CALL 0x004028ba
0049A7CB  8B F8                     MOV EDI,EAX
0049A7CD  85 FF                     TEST EDI,EDI
0049A7CF  75 1B                     JNZ 0x0049a7ec
0049A7D1  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0049A7D7  68 38 06 00 00            PUSH 0x638
0049A7DC  68 3C BE 7A 00            PUSH 0x7abe3c
0049A7E1  52                        PUSH EDX
0049A7E2  68 04 00 FE AF            PUSH 0xaffe0004
0049A7E7  E8 54 B6 20 00            CALL 0x006a5e40
LAB_0049a7ec:
0049A7EC  8B CF                     MOV ECX,EDI
0049A7EE  E8 89 91 F6 FF            CALL 0x0040397c
0049A7F3  85 C0                     TEST EAX,EAX
0049A7F5  75 3B                     JNZ 0x0049a832
0049A7F7  8B CF                     MOV ECX,EDI
0049A7F9  E8 DE 86 F6 FF            CALL 0x00402edc
0049A7FE  83 F8 01                  CMP EAX,0x1
0049A801  74 2F                     JZ 0x0049a832
0049A803  8B CF                     MOV ECX,EDI
0049A805  E8 D2 86 F6 FF            CALL 0x00402edc
0049A80A  85 C0                     TEST EAX,EAX
0049A80C  74 24                     JZ 0x0049a832
LAB_0049a80e:
0049A80E  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0049A811  43                        INC EBX
0049A812  8B D3                     MOV EDX,EBX
0049A814  81 E2 FF FF 00 00         AND EDX,0xffff
0049A81A  3B D0                     CMP EDX,EAX
0049A81C  72 86                     JC 0x0049a7a4
0049A81E  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
0049A821  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0049A826  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0049A829  5F                        POP EDI
0049A82A  5E                        POP ESI
0049A82B  5B                        POP EBX
0049A82C  8B E5                     MOV ESP,EBP
0049A82E  5D                        POP EBP
0049A82F  C2 04 00                  RET 0x4
STGroupBoatC::GrpMove::cf_common_exit_0049A832:
0049A832  C7 45 FC 02 00 00 00      MOV dword ptr [EBP + -0x4],0x2
LAB_0049a839:
0049A839  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
0049A83C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0049A841  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0049A844  5F                        POP EDI
0049A845  5E                        POP ESI
0049A846  5B                        POP EBX
0049A847  8B E5                     MOV ESP,EBP
0049A849  5D                        POP EBP
0049A84A  C2 04 00                  RET 0x4
LAB_0049a84d:
0049A84D  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
0049A850  68 3C BF 7A 00            PUSH 0x7abf3c
0049A855  68 CC 4C 7A 00            PUSH 0x7a4ccc
0049A85A  56                        PUSH ESI
0049A85B  53                        PUSH EBX
0049A85C  68 42 06 00 00            PUSH 0x642
0049A861  68 3C BE 7A 00            PUSH 0x7abe3c
0049A866  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0049A86C  E8 5F 2C 21 00            CALL 0x006ad4d0
0049A871  83 C4 18                  ADD ESP,0x18
0049A874  85 C0                     TEST EAX,EAX
0049A876  74 01                     JZ 0x0049a879
0049A878  CC                        INT3
LAB_0049a879:
0049A879  68 43 06 00 00            PUSH 0x643
0049A87E  68 3C BE 7A 00            PUSH 0x7abe3c
0049A883  53                        PUSH EBX
0049A884  56                        PUSH ESI
0049A885  E8 B6 B5 20 00            CALL 0x006a5e40
0049A88A  5F                        POP EDI
0049A88B  5E                        POP ESI
0049A88C  83 C8 FF                  OR EAX,0xffffffff
0049A88F  5B                        POP EBX
0049A890  8B E5                     MOV ESP,EBP
0049A892  5D                        POP EBP
0049A893  C2 04 00                  RET 0x4
