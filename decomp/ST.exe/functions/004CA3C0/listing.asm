FUN_004ca3c0:
004CA3C0  55                        PUSH EBP
004CA3C1  8B EC                     MOV EBP,ESP
004CA3C3  81 EC 58 01 00 00         SUB ESP,0x158
004CA3C9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004CA3CE  53                        PUSH EBX
004CA3CF  56                        PUSH ESI
004CA3D0  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
004CA3D3  57                        PUSH EDI
004CA3D4  8D 55 AC                  LEA EDX,[EBP + -0x54]
004CA3D7  8D 4D A8                  LEA ECX,[EBP + -0x58]
004CA3DA  6A 00                     PUSH 0x0
004CA3DC  52                        PUSH EDX
004CA3DD  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
004CA3E0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004CA3E6  E8 05 34 26 00            CALL 0x0072d7f0
004CA3EB  8B F0                     MOV ESI,EAX
004CA3ED  83 C4 08                  ADD ESP,0x8
004CA3F0  85 F6                     TEST ESI,ESI
004CA3F2  0F 85 96 02 00 00         JNZ 0x004ca68e
004CA3F8  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
004CA3FB  8B 87 F3 05 00 00         MOV EAX,dword ptr [EDI + 0x5f3]
004CA401  85 C0                     TEST EAX,EAX
004CA403  0F 84 23 01 00 00         JZ 0x004ca52c
004CA409  8B 87 F5 01 00 00         MOV EAX,dword ptr [EDI + 0x1f5]
004CA40F  8D B7 D5 01 00 00         LEA ESI,[EDI + 0x1d5]
004CA415  6A 0D                     PUSH 0xd
004CA417  8B 88 E4 01 00 00         MOV ECX,dword ptr [EAX + 0x1e4]
004CA41D  8B 90 E8 01 00 00         MOV EDX,dword ptr [EAX + 0x1e8]
004CA423  8B 80 EC 01 00 00         MOV EAX,dword ptr [EAX + 0x1ec]
004CA429  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004CA42C  8B CE                     MOV ECX,ESI
004CA42E  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
004CA431  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004CA434  E8 73 7E F3 FF            CALL 0x004022ac
004CA439  85 C0                     TEST EAX,EAX
004CA43B  74 42                     JZ 0x004ca47f
004CA43D  6A 0D                     PUSH 0xd
004CA43F  8B CE                     MOV ECX,ESI
004CA441  E8 66 7E F3 FF            CALL 0x004022ac
004CA446  C1 E0 02                  SHL EAX,0x2
004CA449  50                        PUSH EAX
004CA44A  E8 C1 07 1E 00            CALL 0x006aac10
004CA44F  6A 0D                     PUSH 0xd
004CA451  8B CE                     MOV ECX,ESI
004CA453  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004CA456  33 DB                     XOR EBX,EBX
004CA458  E8 4F 7E F3 FF            CALL 0x004022ac
004CA45D  85 C0                     TEST EAX,EAX
004CA45F  7E 1E                     JLE 0x004ca47f
LAB_004ca461:
004CA461  53                        PUSH EBX
004CA462  6A 0D                     PUSH 0xd
004CA464  8B CE                     MOV ECX,ESI
004CA466  E8 BE B5 F3 FF            CALL 0x00405a29
004CA46B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004CA46E  6A 0D                     PUSH 0xd
004CA470  89 04 99                  MOV dword ptr [ECX + EBX*0x4],EAX
004CA473  8B CE                     MOV ECX,ESI
004CA475  43                        INC EBX
004CA476  E8 31 7E F3 FF            CALL 0x004022ac
004CA47B  3B D8                     CMP EBX,EAX
004CA47D  7C E2                     JL 0x004ca461
LAB_004ca47f:
004CA47F  8B 97 C0 05 00 00         MOV EDX,dword ptr [EDI + 0x5c0]
004CA485  8B 87 F3 05 00 00         MOV EAX,dword ptr [EDI + 0x5f3]
004CA48B  52                        PUSH EDX
004CA48C  50                        PUSH EAX
004CA48D  8D 8D A8 FE FF FF         LEA ECX,[EBP + 0xfffffea8]
004CA493  68 08 C9 7A 00            PUSH 0x7ac908
004CA498  51                        PUSH ECX
004CA499  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
004CA49F  A1 8C 67 80 00            MOV EAX,[0x0080678c]
004CA4A4  83 C4 10                  ADD ESP,0x10
004CA4A7  8D 95 A8 FE FF FF         LEA EDX,[EBP + 0xfffffea8]
004CA4AD  8B CE                     MOV ECX,ESI
004CA4AF  6A 1D                     PUSH 0x1d
004CA4B1  52                        PUSH EDX
004CA4B2  50                        PUSH EAX
004CA4B3  6A 0D                     PUSH 0xd
004CA4B5  E8 C9 9C F3 FF            CALL 0x00404183
004CA4BA  85 C0                     TEST EAX,EAX
004CA4BC  74 17                     JZ 0x004ca4d5
004CA4BE  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004CA4C4  68 D3 00 00 00            PUSH 0xd3
004CA4C9  68 D0 D4 7A 00            PUSH 0x7ad4d0
004CA4CE  51                        PUSH ECX
004CA4CF  50                        PUSH EAX
004CA4D0  E8 6B B9 1D 00            CALL 0x006a5e40
LAB_004ca4d5:
004CA4D5  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
004CA4D8  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004CA4DB  6A 00                     PUSH 0x0
004CA4DD  52                        PUSH EDX
004CA4DE  50                        PUSH EAX
004CA4DF  6A 0D                     PUSH 0xd
004CA4E1  8B CE                     MOV ECX,ESI
004CA4E3  E8 D2 79 F3 FF            CALL 0x00401eba
004CA4E8  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004CA4EB  51                        PUSH ECX
004CA4EC  6A 0D                     PUSH 0xd
004CA4EE  8B CE                     MOV ECX,ESI
004CA4F0  E8 6F 6B F3 FF            CALL 0x00401064
004CA4F5  6A 0D                     PUSH 0xd
004CA4F7  8B CE                     MOV ECX,ESI
004CA4F9  33 DB                     XOR EBX,EBX
004CA4FB  E8 AC 7D F3 FF            CALL 0x004022ac
004CA500  85 C0                     TEST EAX,EAX
004CA502  7E 1F                     JLE 0x004ca523
LAB_004ca504:
004CA504  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004CA507  8B CE                     MOV ECX,ESI
004CA509  8B 04 9A                  MOV EAX,dword ptr [EDX + EBX*0x4]
004CA50C  50                        PUSH EAX
004CA50D  53                        PUSH EBX
004CA50E  6A 0D                     PUSH 0xd
004CA510  E8 2C AC F3 FF            CALL 0x00405141
004CA515  6A 0D                     PUSH 0xd
004CA517  8B CE                     MOV ECX,ESI
004CA519  43                        INC EBX
004CA51A  E8 8D 7D F3 FF            CALL 0x004022ac
004CA51F  3B D8                     CMP EBX,EAX
004CA521  7C E1                     JL 0x004ca504
LAB_004ca523:
004CA523  8D 4D FC                  LEA ECX,[EBP + -0x4]
004CA526  51                        PUSH ECX
004CA527  E8 34 0B 1E 00            CALL 0x006ab060
LAB_004ca52c:
004CA52C  8B 97 35 02 00 00         MOV EDX,dword ptr [EDI + 0x235]
004CA532  8B 04 95 10 1A 79 00      MOV EAX,dword ptr [EDX*0x4 + 0x791a10]
004CA539  85 C0                     TEST EAX,EAX
004CA53B  0F 84 3B 01 00 00         JZ 0x004ca67c
004CA541  8B 87 AC 05 00 00         MOV EAX,dword ptr [EDI + 0x5ac]
004CA547  83 F8 40                  CMP EAX,0x40
004CA54A  0F 84 2C 01 00 00         JZ 0x004ca67c
004CA550  83 F8 49                  CMP EAX,0x49
004CA553  0F 84 23 01 00 00         JZ 0x004ca67c
004CA559  8B 87 F5 01 00 00         MOV EAX,dword ptr [EDI + 0x1f5]
004CA55F  8D B7 D5 01 00 00         LEA ESI,[EDI + 0x1d5]
004CA565  6A 08                     PUSH 0x8
004CA567  8B 88 30 01 00 00         MOV ECX,dword ptr [EAX + 0x130]
004CA56D  8B 90 34 01 00 00         MOV EDX,dword ptr [EAX + 0x134]
004CA573  8B 80 38 01 00 00         MOV EAX,dword ptr [EAX + 0x138]
004CA579  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004CA57C  8B CE                     MOV ECX,ESI
004CA57E  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
004CA581  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004CA584  E8 23 7D F3 FF            CALL 0x004022ac
004CA589  85 C0                     TEST EAX,EAX
004CA58B  74 42                     JZ 0x004ca5cf
004CA58D  6A 08                     PUSH 0x8
004CA58F  8B CE                     MOV ECX,ESI
004CA591  E8 16 7D F3 FF            CALL 0x004022ac
004CA596  C1 E0 02                  SHL EAX,0x2
004CA599  50                        PUSH EAX
004CA59A  E8 71 06 1E 00            CALL 0x006aac10
004CA59F  6A 08                     PUSH 0x8
004CA5A1  8B CE                     MOV ECX,ESI
004CA5A3  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004CA5A6  33 DB                     XOR EBX,EBX
004CA5A8  E8 FF 7C F3 FF            CALL 0x004022ac
004CA5AD  85 C0                     TEST EAX,EAX
004CA5AF  7E 1E                     JLE 0x004ca5cf
LAB_004ca5b1:
004CA5B1  53                        PUSH EBX
004CA5B2  6A 08                     PUSH 0x8
004CA5B4  8B CE                     MOV ECX,ESI
004CA5B6  E8 6E B4 F3 FF            CALL 0x00405a29
004CA5BB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004CA5BE  6A 08                     PUSH 0x8
004CA5C0  89 04 99                  MOV dword ptr [ECX + EBX*0x4],EAX
004CA5C3  8B CE                     MOV ECX,ESI
004CA5C5  43                        INC EBX
004CA5C6  E8 E1 7C F3 FF            CALL 0x004022ac
004CA5CB  3B D8                     CMP EBX,EAX
004CA5CD  7C E2                     JL 0x004ca5b1
LAB_004ca5cf:
004CA5CF  8B 97 C0 05 00 00         MOV EDX,dword ptr [EDI + 0x5c0]
004CA5D5  8B 87 F3 05 00 00         MOV EAX,dword ptr [EDI + 0x5f3]
004CA5DB  52                        PUSH EDX
004CA5DC  50                        PUSH EAX
004CA5DD  8D 8D A8 FE FF FF         LEA ECX,[EBP + 0xfffffea8]
004CA5E3  68 EC C8 7A 00            PUSH 0x7ac8ec
004CA5E8  51                        PUSH ECX
004CA5E9  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
004CA5EF  A1 8C 67 80 00            MOV EAX,[0x0080678c]
004CA5F4  83 C4 10                  ADD ESP,0x10
004CA5F7  8D 95 A8 FE FF FF         LEA EDX,[EBP + 0xfffffea8]
004CA5FD  8B CE                     MOV ECX,ESI
004CA5FF  6A 1D                     PUSH 0x1d
004CA601  52                        PUSH EDX
004CA602  50                        PUSH EAX
004CA603  6A 08                     PUSH 0x8
004CA605  E8 79 9B F3 FF            CALL 0x00404183
004CA60A  85 C0                     TEST EAX,EAX
004CA60C  74 17                     JZ 0x004ca625
004CA60E  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004CA614  68 EA 00 00 00            PUSH 0xea
004CA619  68 D0 D4 7A 00            PUSH 0x7ad4d0
004CA61E  51                        PUSH ECX
004CA61F  50                        PUSH EAX
004CA620  E8 1B B8 1D 00            CALL 0x006a5e40
LAB_004ca625:
004CA625  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
004CA628  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004CA62B  6A 00                     PUSH 0x0
004CA62D  52                        PUSH EDX
004CA62E  50                        PUSH EAX
004CA62F  6A 08                     PUSH 0x8
004CA631  8B CE                     MOV ECX,ESI
004CA633  E8 82 78 F3 FF            CALL 0x00401eba
004CA638  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004CA63B  51                        PUSH ECX
004CA63C  6A 08                     PUSH 0x8
004CA63E  8B CE                     MOV ECX,ESI
004CA640  E8 1F 6A F3 FF            CALL 0x00401064
004CA645  6A 08                     PUSH 0x8
004CA647  8B CE                     MOV ECX,ESI
004CA649  33 FF                     XOR EDI,EDI
004CA64B  E8 5C 7C F3 FF            CALL 0x004022ac
004CA650  85 C0                     TEST EAX,EAX
004CA652  7E 1F                     JLE 0x004ca673
LAB_004ca654:
004CA654  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004CA657  8B CE                     MOV ECX,ESI
004CA659  8B 04 BA                  MOV EAX,dword ptr [EDX + EDI*0x4]
004CA65C  50                        PUSH EAX
004CA65D  57                        PUSH EDI
004CA65E  6A 08                     PUSH 0x8
004CA660  E8 DC AA F3 FF            CALL 0x00405141
004CA665  6A 08                     PUSH 0x8
004CA667  8B CE                     MOV ECX,ESI
004CA669  47                        INC EDI
004CA66A  E8 3D 7C F3 FF            CALL 0x004022ac
004CA66F  3B F8                     CMP EDI,EAX
004CA671  7C E1                     JL 0x004ca654
LAB_004ca673:
004CA673  8D 4D FC                  LEA ECX,[EBP + -0x4]
004CA676  51                        PUSH ECX
004CA677  E8 E4 09 1E 00            CALL 0x006ab060
LAB_004ca67c:
004CA67C  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
004CA67F  33 C0                     XOR EAX,EAX
004CA681  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004CA687  5F                        POP EDI
004CA688  5E                        POP ESI
004CA689  5B                        POP EBX
004CA68A  8B E5                     MOV ESP,EBP
004CA68C  5D                        POP EBP
004CA68D  C3                        RET
LAB_004ca68e:
004CA68E  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
004CA691  68 F8 D4 7A 00            PUSH 0x7ad4f8
004CA696  68 CC 4C 7A 00            PUSH 0x7a4ccc
004CA69B  56                        PUSH ESI
004CA69C  6A 00                     PUSH 0x0
004CA69E  68 F6 00 00 00            PUSH 0xf6
004CA6A3  68 D0 D4 7A 00            PUSH 0x7ad4d0
004CA6A8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004CA6AD  E8 1E 2E 1E 00            CALL 0x006ad4d0
004CA6B2  83 C4 18                  ADD ESP,0x18
004CA6B5  85 C0                     TEST EAX,EAX
004CA6B7  74 01                     JZ 0x004ca6ba
004CA6B9  CC                        INT3
LAB_004ca6ba:
004CA6BA  68 F7 00 00 00            PUSH 0xf7
004CA6BF  68 D0 D4 7A 00            PUSH 0x7ad4d0
004CA6C4  6A 00                     PUSH 0x0
004CA6C6  56                        PUSH ESI
004CA6C7  E8 74 B7 1D 00            CALL 0x006a5e40
004CA6CC  8B C6                     MOV EAX,ESI
004CA6CE  5F                        POP EDI
004CA6CF  5E                        POP ESI
004CA6D0  5B                        POP EBX
004CA6D1  8B E5                     MOV ESP,EBP
004CA6D3  5D                        POP EBP
004CA6D4  C3                        RET
