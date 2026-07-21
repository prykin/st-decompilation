SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00573260::FUN_00573260:
00573260  55                        PUSH EBP
00573261  8B EC                     MOV EBP,ESP
00573263  81 EC 34 01 00 00         SUB ESP,0x134
00573269  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0057326E  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00573271  8D 95 14 FF FF FF         LEA EDX,[EBP + 0xffffff14]
00573277  8D 8D 10 FF FF FF         LEA ECX,[EBP + 0xffffff10]
0057327D  6A 00                     PUSH 0x0
0057327F  52                        PUSH EDX
00573280  89 85 10 FF FF FF         MOV dword ptr [EBP + 0xffffff10],EAX
00573286  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0057328C  E8 5F A5 1B 00            CALL 0x0072d7f0
00573291  83 C4 08                  ADD ESP,0x8
00573294  85 C0                     TEST EAX,EAX
00573296  75 3B                     JNZ 0x005732d3
00573298  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0057329B  83 39 00                  CMP dword ptr [ECX],0x0
0057329E  74 0E                     JZ 0x005732ae
005732A0  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
005732A3  8B 80 80 00 00 00         MOV EAX,dword ptr [EAX + 0x80]
005732A9  83 E0 01                  AND EAX,0x1
005732AC  EB 02                     JMP 0x005732b0
LAB_005732ae:
005732AE  33 C0                     XOR EAX,EAX
LAB_005732b0:
005732B0  85 C0                     TEST EAX,EAX
005732B2  74 13                     JZ 0x005732c7
005732B4  8B 49 04                  MOV ECX,dword ptr [ECX + 0x4]
005732B7  8D 55 E0                  LEA EDX,[EBP + -0x20]
005732BA  8D 45 F0                  LEA EAX,[EBP + -0x10]
005732BD  52                        PUSH EDX
005732BE  50                        PUSH EAX
005732BF  6A 03                     PUSH 0x3
005732C1  51                        PUSH ECX
005732C2  E8 39 4B 14 00            CALL 0x006b7e00
LAB_005732c7:
005732C7  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
005732CA  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005732CD  03 C2                     ADD EAX,EDX
005732CF  D1 E8                     SHR EAX,0x1
005732D1  EB 02                     JMP 0x005732d5
LAB_005732d3:
005732D3  33 C0                     XOR EAX,EAX
LAB_005732d5:
005732D5  8B 8D 10 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff10]
005732DB  A3 02 73 80 00            MOV [0x00807302],EAX
005732E0  8D 85 58 FF FF FF         LEA EAX,[EBP + 0xffffff58]
005732E6  8D 95 54 FF FF FF         LEA EDX,[EBP + 0xffffff54]
005732EC  6A 00                     PUSH 0x0
005732EE  50                        PUSH EAX
005732EF  89 8D 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],ECX
005732F5  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005732FB  E8 F0 A4 1B 00            CALL 0x0072d7f0
00573300  83 C4 08                  ADD ESP,0x8
00573303  85 C0                     TEST EAX,EAX
00573305  75 39                     JNZ 0x00573340
00573307  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0057330A  83 39 00                  CMP dword ptr [ECX],0x0
0057330D  74 0B                     JZ 0x0057331a
0057330F  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00573312  8B 42 50                  MOV EAX,dword ptr [EDX + 0x50]
00573315  83 E0 01                  AND EAX,0x1
00573318  EB 02                     JMP 0x0057331c
LAB_0057331a:
0057331A  33 C0                     XOR EAX,EAX
LAB_0057331c:
0057331C  85 C0                     TEST EAX,EAX
0057331E  74 13                     JZ 0x00573333
00573320  8D 45 E4                  LEA EAX,[EBP + -0x1c]
00573323  8D 55 E8                  LEA EDX,[EBP + -0x18]
00573326  50                        PUSH EAX
00573327  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
0057332A  52                        PUSH EDX
0057332B  6A 01                     PUSH 0x1
0057332D  50                        PUSH EAX
0057332E  E8 CD 4A 14 00            CALL 0x006b7e00
LAB_00573333:
00573333  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00573336  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00573339  8D 04 0A                  LEA EAX,[EDX + ECX*0x1]
0057333C  D1 E8                     SHR EAX,0x1
0057333E  EB 02                     JMP 0x00573342
LAB_00573340:
00573340  33 C0                     XOR EAX,EAX
LAB_00573342:
00573342  A3 12 73 80 00            MOV [0x00807312],EAX
00573347  8B 85 54 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff54]
0057334D  8D 95 D0 FE FF FF         LEA EDX,[EBP + 0xfffffed0]
00573353  8D 8D CC FE FF FF         LEA ECX,[EBP + 0xfffffecc]
00573359  6A 00                     PUSH 0x0
0057335B  52                        PUSH EDX
0057335C  89 85 CC FE FF FF         MOV dword ptr [EBP + 0xfffffecc],EAX
00573362  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00573368  E8 83 A4 1B 00            CALL 0x0072d7f0
0057336D  83 C4 08                  ADD ESP,0x8
00573370  85 C0                     TEST EAX,EAX
00573372  75 38                     JNZ 0x005733ac
00573374  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00573377  83 39 00                  CMP dword ptr [ECX],0x0
0057337A  74 0B                     JZ 0x00573387
0057337C  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
0057337F  8B 40 68                  MOV EAX,dword ptr [EAX + 0x68]
00573382  83 E0 01                  AND EAX,0x1
00573385  EB 02                     JMP 0x00573389
LAB_00573387:
00573387  33 C0                     XOR EAX,EAX
LAB_00573389:
00573389  85 C0                     TEST EAX,EAX
0057338B  74 13                     JZ 0x005733a0
0057338D  8B 49 04                  MOV ECX,dword ptr [ECX + 0x4]
00573390  8D 55 DC                  LEA EDX,[EBP + -0x24]
00573393  8D 45 F8                  LEA EAX,[EBP + -0x8]
00573396  52                        PUSH EDX
00573397  50                        PUSH EAX
00573398  6A 02                     PUSH 0x2
0057339A  51                        PUSH ECX
0057339B  E8 60 4A 14 00            CALL 0x006b7e00
LAB_005733a0:
005733A0  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
005733A3  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005733A6  03 C2                     ADD EAX,EDX
005733A8  D1 E8                     SHR EAX,0x1
005733AA  EB 02                     JMP 0x005733ae
LAB_005733ac:
005733AC  33 C0                     XOR EAX,EAX
LAB_005733ae:
005733AE  8B 8D CC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffecc]
005733B4  A3 06 73 80 00            MOV [0x00807306],EAX
005733B9  8D 45 9C                  LEA EAX,[EBP + -0x64]
005733BC  8D 55 98                  LEA EDX,[EBP + -0x68]
005733BF  6A 00                     PUSH 0x0
005733C1  50                        PUSH EAX
005733C2  89 4D 98                  MOV dword ptr [EBP + -0x68],ECX
005733C5  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005733CB  E8 20 A4 1B 00            CALL 0x0072d7f0
005733D0  83 C4 08                  ADD ESP,0x8
005733D3  85 C0                     TEST EAX,EAX
005733D5  75 48                     JNZ 0x0057341f
005733D7  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005733DA  83 39 00                  CMP dword ptr [ECX],0x0
005733DD  74 0B                     JZ 0x005733ea
005733DF  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
005733E2  8B 42 38                  MOV EAX,dword ptr [EDX + 0x38]
005733E5  83 E0 01                  AND EAX,0x1
005733E8  EB 02                     JMP 0x005733ec
LAB_005733ea:
005733EA  33 C0                     XOR EAX,EAX
LAB_005733ec:
005733EC  85 C0                     TEST EAX,EAX
005733EE  74 13                     JZ 0x00573403
005733F0  8D 45 F4                  LEA EAX,[EBP + -0xc]
005733F3  8D 55 EC                  LEA EDX,[EBP + -0x14]
005733F6  50                        PUSH EAX
005733F7  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
005733FA  52                        PUSH EDX
005733FB  6A 00                     PUSH 0x0
005733FD  50                        PUSH EAX
005733FE  E8 FD 49 14 00            CALL 0x006b7e00
LAB_00573403:
00573403  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00573406  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00573409  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
0057340C  03 C2                     ADD EAX,EDX
0057340E  D1 E8                     SHR EAX,0x1
00573410  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00573416  A3 16 73 80 00            MOV [0x00807316],EAX
0057341B  8B E5                     MOV ESP,EBP
0057341D  5D                        POP EBP
0057341E  C3                        RET
LAB_0057341f:
0057341F  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
00573422  33 C0                     XOR EAX,EAX
00573424  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0057342A  A3 16 73 80 00            MOV [0x00807316],EAX
0057342F  8B E5                     MOV ESP,EBP
00573431  5D                        POP EBP
00573432  C3                        RET
