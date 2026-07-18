ccFntTy::WrChXY:
00711880  55                        PUSH EBP
00711881  8B EC                     MOV EBP,ESP
00711883  83 EC 48                  SUB ESP,0x48
00711886  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00711889  53                        PUSH EBX
0071188A  56                        PUSH ESI
0071188B  57                        PUSH EDI
0071188C  85 C0                     TEST EAX,EAX
0071188E  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00711891  75 0B                     JNZ 0x0071189e
00711893  33 C0                     XOR EAX,EAX
00711895  5F                        POP EDI
00711896  5E                        POP ESI
00711897  5B                        POP EBX
00711898  8B E5                     MOV ESP,EBP
0071189A  5D                        POP EBP
0071189B  C2 10 00                  RET 0x10
LAB_0071189e:
0071189E  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
007118A3  8D 55 BC                  LEA EDX,[EBP + -0x44]
007118A6  8D 4D B8                  LEA ECX,[EBP + -0x48]
007118A9  6A 00                     PUSH 0x0
007118AB  52                        PUSH EDX
007118AC  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
007118AF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
007118B5  E8 36 BF 01 00            CALL 0x0072d7f0
007118BA  8B F0                     MOV ESI,EAX
007118BC  83 C4 08                  ADD ESP,0x8
007118BF  85 F6                     TEST ESI,ESI
007118C1  0F 85 AA 00 00 00         JNZ 0x00711971
007118C7  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
007118CA  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
007118CD  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
007118D0  85 FF                     TEST EDI,EDI
007118D2  7D 4B                     JGE 0x0071191f
007118D4  83 FF FD                  CMP EDI,-0x3
007118D7  53                        PUSH EBX
007118D8  8B CE                     MOV ECX,ESI
007118DA  75 1F                     JNZ 0x007118fb
007118DC  E8 CF F6 FF FF            CALL 0x00710fb0
007118E1  8B 8E 9A 00 00 00         MOV ECX,dword ptr [ESI + 0x9a]
007118E7  25 FF FF 00 00            AND EAX,0xffff
007118EC  8B 7E 68                  MOV EDI,dword ptr [ESI + 0x68]
007118EF  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
007118F2  0F BF 44 41 6A            MOVSX EAX,word ptr [ECX + EAX*0x2 + 0x6a]
007118F7  2B F8                     SUB EDI,EAX
007118F9  EB 24                     JMP 0x0071191f
LAB_007118fb:
007118FB  E8 B0 F6 FF FF            CALL 0x00710fb0
00711900  25 FF FF 00 00            AND EAX,0xffff
00711905  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00711908  8B 86 9A 00 00 00         MOV EAX,dword ptr [ESI + 0x9a]
0071190E  0F BF 4C 50 6A            MOVSX ECX,word ptr [EAX + EDX*0x2 + 0x6a]
00711913  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
00711916  2B C1                     SUB EAX,ECX
00711918  99                        CDQ
00711919  2B C2                     SUB EAX,EDX
0071191B  8B F8                     MOV EDI,EAX
0071191D  D1 FF                     SAR EDI,0x1
LAB_0071191f:
0071191F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00711922  85 C0                     TEST EAX,EAX
00711924  7D 25                     JGE 0x0071194b
00711926  53                        PUSH EBX
00711927  8B CE                     MOV ECX,ESI
00711929  E8 82 F6 FF FF            CALL 0x00710fb0
0071192E  8B 96 9A 00 00 00         MOV EDX,dword ptr [ESI + 0x9a]
00711934  25 FF FF 00 00            AND EAX,0xffff
00711939  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0071193C  8B 46 6C                  MOV EAX,dword ptr [ESI + 0x6c]
0071193F  0F BF 4C 4A 6C            MOVSX ECX,word ptr [EDX + ECX*0x2 + 0x6c]
00711944  2B C1                     SUB EAX,ECX
00711946  99                        CDQ
00711947  2B C2                     SUB EAX,EDX
00711949  D1 F8                     SAR EAX,0x1
LAB_0071194b:
0071194B  89 46 54                  MOV dword ptr [ESI + 0x54],EAX
0071194E  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00711951  50                        PUSH EAX
00711952  53                        PUSH EBX
00711953  8B CE                     MOV ECX,ESI
00711955  89 7E 50                  MOV dword ptr [ESI + 0x50],EDI
00711958  E8 93 FD FF FF            CALL 0x007116f0
0071195D  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00711960  33 C0                     XOR EAX,EAX
00711962  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00711968  5F                        POP EDI
00711969  5E                        POP ESI
0071196A  5B                        POP EBX
0071196B  8B E5                     MOV ESP,EBP
0071196D  5D                        POP EBP
0071196E  C2 10 00                  RET 0x10
LAB_00711971:
00711971  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00711974  68 88 02 7F 00            PUSH 0x7f0288
00711979  68 CC 4C 7A 00            PUSH 0x7a4ccc
0071197E  56                        PUSH ESI
0071197F  6A 00                     PUSH 0x0
00711981  68 7F 06 00 00            PUSH 0x67f
00711986  68 90 01 7F 00            PUSH 0x7f0190
0071198B  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00711991  E8 3A BB F9 FF            CALL 0x006ad4d0
00711996  83 C4 18                  ADD ESP,0x18
00711999  85 C0                     TEST EAX,EAX
0071199B  74 01                     JZ 0x0071199e
0071199D  CC                        INT3
LAB_0071199e:
0071199E  68 81 06 00 00            PUSH 0x681
007119A3  68 90 01 7F 00            PUSH 0x7f0190
007119A8  6A 00                     PUSH 0x0
007119AA  56                        PUSH ESI
007119AB  E8 90 44 F9 FF            CALL 0x006a5e40
007119B0  8B C6                     MOV EAX,ESI
007119B2  5F                        POP EDI
007119B3  5E                        POP ESI
007119B4  5B                        POP EBX
007119B5  8B E5                     MOV ESP,EBP
007119B7  5D                        POP EBP
007119B8  C2 10 00                  RET 0x10
