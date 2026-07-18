FUN_0042bb30:
0042BB30  55                        PUSH EBP
0042BB31  8B EC                     MOV EBP,ESP
0042BB33  83 EC 58                  SUB ESP,0x58
0042BB36  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0042BB3B  53                        PUSH EBX
0042BB3C  56                        PUSH ESI
0042BB3D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0042BB40  57                        PUSH EDI
0042BB41  8D 55 AC                  LEA EDX,[EBP + -0x54]
0042BB44  8D 4D A8                  LEA ECX,[EBP + -0x58]
0042BB47  6A 00                     PUSH 0x0
0042BB49  52                        PUSH EDX
0042BB4A  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
0042BB51  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
0042BB54  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0042BB5A  E8 91 1C 30 00            CALL 0x0072d7f0
0042BB5F  8B F0                     MOV ESI,EAX
0042BB61  83 C4 08                  ADD ESP,0x8
0042BB64  85 F6                     TEST ESI,ESI
0042BB66  0F 85 AE 01 00 00         JNZ 0x0042bd1a
0042BB6C  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0042BB6F  8B C3                     MOV EAX,EBX
0042BB71  2B C6                     SUB EAX,ESI
0042BB73  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0042BB76  74 51                     JZ 0x0042bbc9
0042BB78  48                        DEC EAX
0042BB79  74 1C                     JZ 0x0042bb97
0042BB7B  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0042BB80  68 F8 01 00 00            PUSH 0x1f8
0042BB85  68 04 60 7A 00            PUSH 0x7a6004
0042BB8A  50                        PUSH EAX
0042BB8B  68 09 00 FE AF            PUSH 0xaffe0009
0042BB90  E8 AB A2 27 00            CALL 0x006a5e40
0042BB95  EB 69                     JMP 0x0042bc00
LAB_0042bb97:
0042BB97  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0042BB9B  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0042BB9E  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0042BBA1  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0042BBA4  C1 E1 04                  SHL ECX,0x4
0042BBA7  03 C8                     ADD ECX,EAX
0042BBA9  85 F6                     TEST ESI,ESI
0042BBAB  8D 14 4D D3 4F 7F 00      LEA EDX,[ECX*0x2 + 0x7f4fd3]
0042BBB2  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0042BBB5  75 49                     JNZ 0x0042bc00
0042BBB7  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0042BBBA  56                        PUSH ESI
0042BBBB  6A 04                     PUSH 0x4
0042BBBD  8B CF                     MOV ECX,EDI
0042BBBF  E8 91 90 FD FF            CALL 0x00404c55
0042BBC4  56                        PUSH ESI
0042BBC5  6A 05                     PUSH 0x5
0042BBC7  EB 30                     JMP 0x0042bbf9
LAB_0042bbc9:
0042BBC9  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0042BBCD  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0042BBD0  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0042BBD3  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0042BBD6  C1 E1 04                  SHL ECX,0x4
0042BBD9  03 C8                     ADD ECX,EAX
0042BBDB  85 F6                     TEST ESI,ESI
0042BBDD  8D 14 4D 83 4F 7F 00      LEA EDX,[ECX*0x2 + 0x7f4f83]
0042BBE4  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0042BBE7  75 17                     JNZ 0x0042bc00
0042BBE9  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0042BBEC  56                        PUSH ESI
0042BBED  6A 01                     PUSH 0x1
0042BBEF  8B CF                     MOV ECX,EDI
0042BBF1  E8 5F 90 FD FF            CALL 0x00404c55
0042BBF6  56                        PUSH ESI
0042BBF7  6A 02                     PUSH 0x2
LAB_0042bbf9:
0042BBF9  8B CF                     MOV ECX,EDI
0042BBFB  E8 55 90 FD FF            CALL 0x00404c55
LAB_0042bc00:
0042BC00  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0042BC03  C1 E6 04                  SHL ESI,0x4
0042BC06  03 F0                     ADD ESI,EAX
0042BC08  83 3E 00                  CMP dword ptr [ESI],0x0
0042BC0B  75 35                     JNZ 0x0042bc42
0042BC0D  6A 01                     PUSH 0x1
0042BC0F  6A 02                     PUSH 0x2
0042BC11  6A 00                     PUSH 0x0
0042BC13  6A 00                     PUSH 0x0
0042BC15  E8 76 26 28 00            CALL 0x006ae290
0042BC1A  0F BE 4D 14               MOVSX ECX,byte ptr [EBP + 0x14]
0042BC1E  89 46 0A                  MOV dword ptr [ESI + 0xa],EAX
0042BC21  8B C3                     MOV EAX,EBX
0042BC23  66 C7 46 0E 00 00         MOV word ptr [ESI + 0xe],0x0
0042BC29  83 E8 00                  SUB EAX,0x0
0042BC2C  89 4E 04                  MOV dword ptr [ESI + 0x4],ECX
0042BC2F  74 0B                     JZ 0x0042bc3c
0042BC31  48                        DEC EAX
0042BC32  75 0E                     JNZ 0x0042bc42
0042BC34  C7 06 9A 01 00 00         MOV dword ptr [ESI],0x19a
0042BC3A  EB 06                     JMP 0x0042bc42
LAB_0042bc3c:
0042BC3C  C7 06 3C 00 00 00         MOV dword ptr [ESI],0x3c
LAB_0042bc42:
0042BC42  0F BE 55 14               MOVSX EDX,byte ptr [EBP + 0x14]
0042BC46  39 56 04                  CMP dword ptr [ESI + 0x4],EDX
0042BC49  0F 85 92 00 00 00         JNZ 0x0042bce1
0042BC4F  8B 5E 0A                  MOV EBX,dword ptr [ESI + 0xa]
0042BC52  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
0042BC55  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0042BC58  8D 78 FF                  LEA EDI,[EAX + -0x1]
0042BC5B  85 FF                     TEST EDI,EDI
0042BC5D  7C 41                     JL 0x0042bca0
LAB_0042bc5f:
0042BC5F  8D 45 FE                  LEA EAX,[EBP + -0x2]
0042BC62  8B D7                     MOV EDX,EDI
0042BC64  50                        PUSH EAX
0042BC65  8B CB                     MOV ECX,EBX
0042BC67  E8 04 10 28 00            CALL 0x006acc70
0042BC6C  66 8B 45 FE               MOV AX,word ptr [EBP + -0x2]
0042BC70  66 3D FF FF               CMP AX,0xffff
0042BC74  75 03                     JNZ 0x0042bc79
0042BC76  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
LAB_0042bc79:
0042BC79  66 3B 45 18               CMP AX,word ptr [EBP + 0x18]
0042BC7D  75 1B                     JNZ 0x0042bc9a
0042BC7F  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0042BC85  68 09 02 00 00            PUSH 0x209
0042BC8A  68 04 60 7A 00            PUSH 0x7a6004
0042BC8F  51                        PUSH ECX
0042BC90  68 01 00 FE AF            PUSH 0xaffe0001
0042BC95  E8 A6 A1 27 00            CALL 0x006a5e40
LAB_0042bc9a:
0042BC9A  4F                        DEC EDI
0042BC9B  79 C2                     JNS 0x0042bc5f
0042BC9D  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
LAB_0042bca0:
0042BCA0  8D 55 18                  LEA EDX,[EBP + 0x18]
0042BCA3  52                        PUSH EDX
0042BCA4  50                        PUSH EAX
0042BCA5  53                        PUSH EBX
0042BCA6  E8 95 24 28 00            CALL 0x006ae140
0042BCAB  66 FF 46 0E               INC word ptr [ESI + 0xe]
0042BCAF  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0042BCB2  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0042BCB5  6A 01                     PUSH 0x1
0042BCB7  50                        PUSH EAX
0042BCB8  51                        PUSH ECX
0042BCB9  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0042BCBC  E8 F9 6B FD FF            CALL 0x004028ba
0042BCC1  8B 10                     MOV EDX,dword ptr [EAX]
0042BCC3  6A 01                     PUSH 0x1
0042BCC5  8B C8                     MOV ECX,EAX
0042BCC7  FF 92 E8 00 00 00         CALL dword ptr [EDX + 0xe8]
0042BCCD  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
0042BCD0  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0042BCD5  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0042BCD8  5F                        POP EDI
0042BCD9  5E                        POP ESI
0042BCDA  5B                        POP EBX
0042BCDB  8B E5                     MOV ESP,EBP
0042BCDD  5D                        POP EBP
0042BCDE  C2 14 00                  RET 0x14
LAB_0042bce1:
0042BCE1  68 84 61 7A 00            PUSH 0x7a6184
0042BCE6  68 CC 4C 7A 00            PUSH 0x7a4ccc
0042BCEB  6A 00                     PUSH 0x0
0042BCED  6A 00                     PUSH 0x0
0042BCEF  68 10 02 00 00            PUSH 0x210
0042BCF4  68 04 60 7A 00            PUSH 0x7a6004
0042BCF9  E8 D2 17 28 00            CALL 0x006ad4d0
0042BCFE  83 C4 18                  ADD ESP,0x18
0042BD01  85 C0                     TEST EAX,EAX
0042BD03  74 01                     JZ 0x0042bd06
0042BD05  CC                        INT3
LAB_0042bd06:
0042BD06  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
0042BD09  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0042BD0E  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0042BD11  5F                        POP EDI
0042BD12  5E                        POP ESI
0042BD13  5B                        POP EBX
0042BD14  8B E5                     MOV ESP,EBP
0042BD16  5D                        POP EBP
0042BD17  C2 14 00                  RET 0x14
LAB_0042bd1a:
0042BD1A  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
0042BD1D  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
0042BD23  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0042BD29  0F 84 82 00 00 00         JZ 0x0042bdb1
0042BD2F  81 FE 01 00 FE AF         CMP ESI,0xaffe0001
0042BD35  74 42                     JZ 0x0042bd79
0042BD37  68 64 61 7A 00            PUSH 0x7a6164
0042BD3C  68 CC 4C 7A 00            PUSH 0x7a4ccc
0042BD41  56                        PUSH ESI
0042BD42  6A 00                     PUSH 0x0
0042BD44  68 15 02 00 00            PUSH 0x215
0042BD49  68 04 60 7A 00            PUSH 0x7a6004
0042BD4E  E8 7D 17 28 00            CALL 0x006ad4d0
0042BD53  83 C4 18                  ADD ESP,0x18
0042BD56  85 C0                     TEST EAX,EAX
0042BD58  74 01                     JZ 0x0042bd5b
0042BD5A  CC                        INT3
LAB_0042bd5b:
0042BD5B  68 16 02 00 00            PUSH 0x216
0042BD60  68 04 60 7A 00            PUSH 0x7a6004
0042BD65  6A 00                     PUSH 0x0
0042BD67  56                        PUSH ESI
0042BD68  E8 D3 A0 27 00            CALL 0x006a5e40
0042BD6D  83 C8 FF                  OR EAX,0xffffffff
0042BD70  5F                        POP EDI
0042BD71  5E                        POP ESI
0042BD72  5B                        POP EBX
0042BD73  8B E5                     MOV ESP,EBP
0042BD75  5D                        POP EBP
0042BD76  C2 14 00                  RET 0x14
LAB_0042bd79:
0042BD79  68 30 61 7A 00            PUSH 0x7a6130
0042BD7E  68 CC 4C 7A 00            PUSH 0x7a4ccc
0042BD83  6A 00                     PUSH 0x0
0042BD85  6A 00                     PUSH 0x0
0042BD87  68 19 02 00 00            PUSH 0x219
0042BD8C  68 04 60 7A 00            PUSH 0x7a6004
0042BD91  E8 3A 17 28 00            CALL 0x006ad4d0
0042BD96  83 C4 18                  ADD ESP,0x18
0042BD99  85 C0                     TEST EAX,EAX
0042BD9B  74 01                     JZ 0x0042bd9e
0042BD9D  CC                        INT3
LAB_0042bd9e:
0042BD9E  C7 45 EC 01 00 FE AF      MOV dword ptr [EBP + -0x14],0xaffe0001
0042BDA5  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0042BDA8  5F                        POP EDI
0042BDA9  5E                        POP ESI
0042BDAA  5B                        POP EBX
0042BDAB  8B E5                     MOV ESP,EBP
0042BDAD  5D                        POP EBP
0042BDAE  C2 14 00                  RET 0x14
LAB_0042bdb1:
0042BDB1  68 F4 60 7A 00            PUSH 0x7a60f4
0042BDB6  68 CC 4C 7A 00            PUSH 0x7a4ccc
0042BDBB  6A 00                     PUSH 0x0
0042BDBD  6A 00                     PUSH 0x0
0042BDBF  68 1D 02 00 00            PUSH 0x21d
0042BDC4  68 04 60 7A 00            PUSH 0x7a6004
0042BDC9  E8 02 17 28 00            CALL 0x006ad4d0
0042BDCE  83 C4 18                  ADD ESP,0x18
0042BDD1  85 C0                     TEST EAX,EAX
0042BDD3  74 01                     JZ 0x0042bdd6
0042BDD5  CC                        INT3
LAB_0042bdd6:
0042BDD6  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0042BDD9  5F                        POP EDI
0042BDDA  5E                        POP ESI
0042BDDB  5B                        POP EBX
0042BDDC  8B E5                     MOV ESP,EBP
0042BDDE  5D                        POP EBP
0042BDDF  C2 14 00                  RET 0x14
