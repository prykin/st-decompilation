STBoatC::BackAnnih:
0047DA50  55                        PUSH EBP
0047DA51  8B EC                     MOV EBP,ESP
0047DA53  83 EC 28                  SUB ESP,0x28
0047DA56  53                        PUSH EBX
0047DA57  56                        PUSH ESI
0047DA58  57                        PUSH EDI
0047DA59  8B F1                     MOV ESI,ECX
0047DA5B  E8 40 68 F8 FF            CALL 0x004042a0
0047DA60  8B 86 A1 06 00 00         MOV EAX,dword ptr [ESI + 0x6a1]
0047DA66  83 F8 01                  CMP EAX,0x1
0047DA69  0F 84 82 03 00 00         JZ 0x0047ddf1
0047DA6F  83 F8 02                  CMP EAX,0x2
0047DA72  0F 84 79 03 00 00         JZ 0x0047ddf1
0047DA78  8B 86 A5 06 00 00         MOV EAX,dword ptr [ESI + 0x6a5]
0047DA7E  85 C0                     TEST EAX,EAX
0047DA80  0F 84 60 03 00 00         JZ 0x0047dde6
0047DA86  83 F8 01                  CMP EAX,0x1
0047DA89  0F 84 57 03 00 00         JZ 0x0047dde6
0047DA8F  83 F8 02                  CMP EAX,0x2
0047DA92  0F 84 4E 03 00 00         JZ 0x0047dde6
0047DA98  83 F8 03                  CMP EAX,0x3
0047DA9B  75 57                     JNZ 0x0047daf4
0047DA9D  66 8B 8E 95 06 00 00      MOV CX,word ptr [ESI + 0x695]
0047DAA4  66 8B 96 93 06 00 00      MOV DX,word ptr [ESI + 0x693]
0047DAAB  66 69 C9 C8 00            IMUL CX,CX,0xc8
0047DAB0  66 69 D2 C9 00            IMUL DX,DX,0xc9
0047DAB5  83 C1 64                  ADD ECX,0x64
0047DAB8  8B 06                     MOV EAX,dword ptr [ESI]
0047DABA  51                        PUSH ECX
0047DABB  66 8B 8E 91 06 00 00      MOV CX,word ptr [ESI + 0x691]
0047DAC2  66 69 C9 C9 00            IMUL CX,CX,0xc9
0047DAC7  83 C2 64                  ADD EDX,0x64
0047DACA  83 C1 64                  ADD ECX,0x64
0047DACD  52                        PUSH EDX
0047DACE  66 8B 56 45               MOV DX,word ptr [ESI + 0x45]
0047DAD2  51                        PUSH ECX
0047DAD3  66 8B 4E 43               MOV CX,word ptr [ESI + 0x43]
0047DAD7  52                        PUSH EDX
0047DAD8  66 8B 56 41               MOV DX,word ptr [ESI + 0x41]
0047DADC  51                        PUSH ECX
0047DADD  52                        PUSH EDX
0047DADE  8B CE                     MOV ECX,ESI
0047DAE0  FF 50 10                  CALL dword ptr [EAX + 0x10]
0047DAE3  66 89 86 9B 06 00 00      MOV word ptr [ESI + 0x69b],AX
0047DAEA  C7 86 A5 06 00 00 04 00 00 00  MOV dword ptr [ESI + 0x6a5],0x4
LAB_0047daf4:
0047DAF4  8B 86 A5 06 00 00         MOV EAX,dword ptr [ESI + 0x6a5]
0047DAFA  83 F8 04                  CMP EAX,0x4
0047DAFD  75 75                     JNZ 0x0047db74
0047DAFF  66 8B 86 9B 06 00 00      MOV AX,word ptr [ESI + 0x69b]
0047DB06  8B CE                     MOV ECX,ESI
0047DB08  50                        PUSH EAX
0047DB09  E8 A4 55 F8 FF            CALL 0x004030b2
0047DB0E  50                        PUSH EAX
0047DB0F  8B CE                     MOV ECX,ESI
0047DB11  E8 E6 47 F8 FF            CALL 0x004022fc
0047DB16  83 F8 FF                  CMP EAX,-0x1
0047DB19  74 2A                     JZ 0x0047db45
0047DB1B  85 C0                     TEST EAX,EAX
0047DB1D  75 0A                     JNZ 0x0047db29
0047DB1F  C7 86 A5 06 00 00 05 00 00 00  MOV dword ptr [ESI + 0x6a5],0x5
LAB_0047db29:
0047DB29  8B 16                     MOV EDX,dword ptr [ESI]
0047DB2B  8B CE                     MOV ECX,ESI
0047DB2D  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
0047DB33  F7 D8                     NEG EAX
0047DB35  1B C0                     SBB EAX,EAX
0047DB37  24 FD                     AND AL,0xfd
0047DB39  83 C0 02                  ADD EAX,0x2
0047DB3C  5F                        POP EDI
0047DB3D  5E                        POP ESI
0047DB3E  5B                        POP EBX
0047DB3F  8B E5                     MOV ESP,EBP
0047DB41  5D                        POP EBP
0047DB42  C2 04 00                  RET 0x4
LAB_0047db45:
0047DB45  68 BC B6 7A 00            PUSH 0x7ab6bc
0047DB4A  68 CC 4C 7A 00            PUSH 0x7a4ccc
0047DB4F  6A 00                     PUSH 0x0
0047DB51  6A 00                     PUSH 0x0
0047DB53  68 25 39 00 00            PUSH 0x3925
0047DB58  68 3C 9D 7A 00            PUSH 0x7a9d3c
0047DB5D  E8 6E F9 22 00            CALL 0x006ad4d0
0047DB62  83 C4 18                  ADD ESP,0x18
0047DB65  85 C0                     TEST EAX,EAX
0047DB67  74 01                     JZ 0x0047db6a
0047DB69  CC                        INT3
LAB_0047db6a:
0047DB6A  68 25 39 00 00            PUSH 0x3925
0047DB6F  E9 4F 02 00 00            JMP 0x0047ddc3
LAB_0047db74:
0047DB74  83 F8 05                  CMP EAX,0x5
0047DB77  75 54                     JNZ 0x0047dbcd
0047DB79  8A 4E 61                  MOV CL,byte ptr [ESI + 0x61]
0047DB7C  66 8B 96 95 06 00 00      MOV DX,word ptr [ESI + 0x695]
0047DB83  66 8B 86 93 06 00 00      MOV AX,word ptr [ESI + 0x693]
0047DB8A  51                        PUSH ECX
0047DB8B  66 8B 8E 91 06 00 00      MOV CX,word ptr [ESI + 0x691]
0047DB92  66 69 D2 C8 00            IMUL DX,DX,0xc8
0047DB97  66 69 C0 C9 00            IMUL AX,AX,0xc9
0047DB9C  66 69 C9 C9 00            IMUL CX,CX,0xc9
0047DBA1  83 C2 64                  ADD EDX,0x64
0047DBA4  83 C0 64                  ADD EAX,0x64
0047DBA7  52                        PUSH EDX
0047DBA8  66 8B 56 45               MOV DX,word ptr [ESI + 0x45]
0047DBAC  83 C1 64                  ADD ECX,0x64
0047DBAF  50                        PUSH EAX
0047DBB0  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
0047DBB4  51                        PUSH ECX
0047DBB5  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
0047DBB9  52                        PUSH EDX
0047DBBA  50                        PUSH EAX
0047DBBB  51                        PUSH ECX
0047DBBC  8B CE                     MOV ECX,ESI
0047DBBE  E8 92 48 F8 FF            CALL 0x00402455
0047DBC3  C7 86 A5 06 00 00 06 00 00 00  MOV dword ptr [ESI + 0x6a5],0x6
LAB_0047dbcd:
0047DBCD  83 BE A5 06 00 00 06      CMP dword ptr [ESI + 0x6a5],0x6
0047DBD4  0F 85 4F FF FF FF         JNZ 0x0047db29
0047DBDA  8D 55 F0                  LEA EDX,[EBP + -0x10]
0047DBDD  8D 45 EC                  LEA EAX,[EBP + -0x14]
0047DBE0  52                        PUSH EDX
0047DBE1  50                        PUSH EAX
0047DBE2  8B CE                     MOV ECX,ESI
0047DBE4  E8 5E 4C F8 FF            CALL 0x00402847
0047DBE9  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
0047DBEC  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0047DBEF  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0047DBF5  33 D2                     XOR EDX,EDX
0047DBF7  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
0047DBFD  B9 07 00 00 00            MOV ECX,0x7
0047DC02  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0047DC05  C1 E8 10                  SHR EAX,0x10
0047DC08  F7 F1                     DIV ECX
0047DC0A  8B FA                     MOV EDI,EDX
0047DC0C  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0047DC0F  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0047DC15  83 EF 03                  SUB EDI,0x3
0047DC18  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0047DC1E  33 D2                     XOR EDX,EDX
0047DC20  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0047DC23  C1 E8 10                  SHR EAX,0x10
0047DC26  F7 F1                     DIV ECX
0047DC28  8B DA                     MOV EBX,EDX
0047DC2A  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0047DC2D  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0047DC33  83 EB 03                  SUB EBX,0x3
0047DC36  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0047DC3C  33 D2                     XOR EDX,EDX
0047DC3E  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0047DC41  C1 E8 10                  SHR EAX,0x10
0047DC44  F7 F1                     DIV ECX
0047DC46  8B 8E 4A 07 00 00         MOV ECX,dword ptr [ESI + 0x74a]
0047DC4C  83 EA 03                  SUB EDX,0x3
0047DC4F  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0047DC52  8B 15 24 67 80 00         MOV EDX,dword ptr [0x00806724]
0047DC58  0F BF 42 23               MOVSX EAX,word ptr [EDX + 0x23]
0047DC5C  99                        CDQ
0047DC5D  2B C2                     SUB EAX,EDX
0047DC5F  D1 F8                     SAR EAX,0x1
0047DC61  3B C8                     CMP ECX,EAX
0047DC63  0F 8F 09 01 00 00         JG 0x0047dd72
0047DC69  8A 86 BF 02 00 00         MOV AL,byte ptr [ESI + 0x2bf]
0047DC6F  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0047DC76  84 C0                     TEST AL,AL
0047DC78  0F 86 F4 00 00 00         JBE 0x0047dd72
0047DC7E  8D 86 B3 02 00 00         LEA EAX,[ESI + 0x2b3]
0047DC84  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0047dc87:
0047DC87  66 8B 4E 6C               MOV CX,word ptr [ESI + 0x6c]
0047DC8B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0047DC8E  51                        PUSH ECX
0047DC8F  8B 0A                     MOV ECX,dword ptr [EDX]
0047DC91  83 EC 08                  SUB ESP,0x8
0047DC94  8B C4                     MOV EAX,ESP
0047DC96  66 8B 52 04               MOV DX,word ptr [EDX + 0x4]
0047DC9A  89 08                     MOV dword ptr [EAX],ECX
0047DC9C  8B CE                     MOV ECX,ESI
0047DC9E  66 89 50 04               MOV word ptr [EAX + 0x4],DX
0047DCA2  8D 45 D8                  LEA EAX,[EBP + -0x28]
0047DCA5  50                        PUSH EAX
0047DCA6  E8 81 57 F8 FF            CALL 0x0040342c
0047DCAB  8B 08                     MOV ECX,dword ptr [EAX]
0047DCAD  6A 00                     PUSH 0x0
0047DCAF  6A 00                     PUSH 0x0
0047DCB1  6A FF                     PUSH -0x1
0047DCB3  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
0047DCB7  6A 00                     PUSH 0x0
0047DCB9  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0047DCBC  8B 0D 2C 73 80 00         MOV ECX,dword ptr [0x0080732c]
0047DCC2  6A 00                     PUSH 0x0
0047DCC4  6A 00                     PUSH 0x0
0047DCC6  6A 00                     PUSH 0x0
0047DCC8  83 F9 01                  CMP ECX,0x1
0047DCCB  6A 00                     PUSH 0x0
0047DCCD  66 89 45 E4               MOV word ptr [EBP + -0x1c],AX
0047DCD1  6A 00                     PUSH 0x0
0047DCD3  75 41                     JNZ 0x0047dd16
0047DCD5  D9 46 70                  FLD float ptr [ESI + 0x70]
0047DCD8  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
0047DCDE  E8 A5 05 2B 00            CALL 0x0072e288
0047DCE3  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0047DCE6  0F BF D0                  MOVSX EDX,AX
0047DCE9  0F BF 46 45               MOVSX EAX,word ptr [ESI + 0x45]
0047DCED  03 C1                     ADD EAX,ECX
0047DCEF  0F BF 4D E4               MOVSX ECX,word ptr [EBP + -0x1c]
0047DCF3  03 C2                     ADD EAX,EDX
0047DCF5  0F BF 56 43               MOVSX EDX,word ptr [ESI + 0x43]
0047DCF9  03 C8                     ADD ECX,EAX
0047DCFB  0F BF 45 E2               MOVSX EAX,word ptr [EBP + -0x1e]
0047DCFF  2B D0                     SUB EDX,EAX
0047DD01  51                        PUSH ECX
0047DD02  0F BF 4E 41               MOVSX ECX,word ptr [ESI + 0x41]
0047DD06  03 D3                     ADD EDX,EBX
0047DD08  8B C7                     MOV EAX,EDI
0047DD0A  52                        PUSH EDX
0047DD0B  03 C1                     ADD EAX,ECX
0047DD0D  0F BF 55 E0               MOVSX EDX,word ptr [EBP + -0x20]
0047DD11  03 D0                     ADD EDX,EAX
0047DD13  52                        PUSH EDX
0047DD14  EB 2B                     JMP 0x0047dd41
LAB_0047dd16:
0047DD16  0F BF 4E 45               MOVSX ECX,word ptr [ESI + 0x45]
0047DD1A  0F BF D0                  MOVSX EDX,AX
0047DD1D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0047DD20  03 C1                     ADD EAX,ECX
0047DD22  0F BF 4E 43               MOVSX ECX,word ptr [ESI + 0x43]
0047DD26  03 D0                     ADD EDX,EAX
0047DD28  52                        PUSH EDX
0047DD29  0F BF 55 E2               MOVSX EDX,word ptr [EBP + -0x1e]
0047DD2D  0F BF 46 41               MOVSX EAX,word ptr [ESI + 0x41]
0047DD31  2B CA                     SUB ECX,EDX
0047DD33  8B D7                     MOV EDX,EDI
0047DD35  03 CB                     ADD ECX,EBX
0047DD37  03 D0                     ADD EDX,EAX
0047DD39  51                        PUSH ECX
0047DD3A  0F BF 4D E0               MOVSX ECX,word ptr [EBP + -0x20]
0047DD3E  03 CA                     ADD ECX,EDX
0047DD40  51                        PUSH ECX
LAB_0047dd41:
0047DD41  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
0047DD47  6A 07                     PUSH 0x7
0047DD49  6A 02                     PUSH 0x2
0047DD4B  6A 01                     PUSH 0x1
0047DD4D  E8 E1 36 F8 FF            CALL 0x00401433
0047DD52  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0047DD55  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0047DD58  83 C1 06                  ADD ECX,0x6
0047DD5B  40                        INC EAX
0047DD5C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0047DD5F  33 C9                     XOR ECX,ECX
0047DD61  8A 8E BF 02 00 00         MOV CL,byte ptr [ESI + 0x2bf]
0047DD67  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0047DD6A  3B C1                     CMP EAX,ECX
0047DD6C  0F 8C 15 FF FF FF         JL 0x0047dc87
LAB_0047dd72:
0047DD72  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0047DD75  83 F8 FF                  CMP EAX,-0x1
0047DD78  74 1F                     JZ 0x0047dd99
0047DD7A  85 C0                     TEST EAX,EAX
0047DD7C  0F 85 A7 FD FF FF         JNZ 0x0047db29
0047DD82  8B 16                     MOV EDX,dword ptr [ESI]
0047DD84  8B CE                     MOV ECX,ESI
0047DD86  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
0047DD8C  F7 D8                     NEG EAX
0047DD8E  1B C0                     SBB EAX,EAX
0047DD90  5F                        POP EDI
0047DD91  5E                        POP ESI
0047DD92  5B                        POP EBX
0047DD93  8B E5                     MOV ESP,EBP
0047DD95  5D                        POP EBP
0047DD96  C2 04 00                  RET 0x4
LAB_0047dd99:
0047DD99  68 A0 B6 7A 00            PUSH 0x7ab6a0
0047DD9E  68 CC 4C 7A 00            PUSH 0x7a4ccc
0047DDA3  6A 00                     PUSH 0x0
0047DDA5  6A 00                     PUSH 0x0
0047DDA7  68 4C 39 00 00            PUSH 0x394c
0047DDAC  68 3C 9D 7A 00            PUSH 0x7a9d3c
0047DDB1  E8 1A F7 22 00            CALL 0x006ad4d0
0047DDB6  83 C4 18                  ADD ESP,0x18
0047DDB9  85 C0                     TEST EAX,EAX
0047DDBB  74 01                     JZ 0x0047ddbe
0047DDBD  CC                        INT3
LAB_0047ddbe:
0047DDBE  68 4C 39 00 00            PUSH 0x394c
LAB_0047ddc3:
0047DDC3  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0047DDC8  68 3C 9D 7A 00            PUSH 0x7a9d3c
0047DDCD  50                        PUSH EAX
0047DDCE  68 FF FF 00 00            PUSH 0xffff
0047DDD3  E8 68 80 22 00            CALL 0x006a5e40
0047DDD8  B8 FF FF 00 00            MOV EAX,0xffff
0047DDDD  5F                        POP EDI
0047DDDE  5E                        POP ESI
0047DDDF  5B                        POP EBX
0047DDE0  8B E5                     MOV ESP,EBP
0047DDE2  5D                        POP EBP
0047DDE3  C2 04 00                  RET 0x4
LAB_0047dde6:
0047DDE6  33 C0                     XOR EAX,EAX
0047DDE8  5F                        POP EDI
0047DDE9  5E                        POP ESI
0047DDEA  5B                        POP EBX
0047DDEB  8B E5                     MOV ESP,EBP
0047DDED  5D                        POP EBP
0047DDEE  C2 04 00                  RET 0x4
LAB_0047ddf1:
0047DDF1  6A 02                     PUSH 0x2
0047DDF3  8B CE                     MOV ECX,ESI
0047DDF5  E8 01 37 F8 FF            CALL 0x004014fb
0047DDFA  5F                        POP EDI
0047DDFB  5E                        POP ESI
0047DDFC  5B                        POP EBX
0047DDFD  8B E5                     MOV ESP,EBP
0047DDFF  5D                        POP EBP
0047DE00  C2 04 00                  RET 0x4
