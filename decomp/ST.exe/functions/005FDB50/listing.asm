SubmarineTitans::Recovered::HiddenThis::AnonReceiver_005FDB50::FUN_005fdb50:
005FDB50  55                        PUSH EBP
005FDB51  8B EC                     MOV EBP,ESP
005FDB53  83 EC 24                  SUB ESP,0x24
005FDB56  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005FDB59  53                        PUSH EBX
005FDB5A  56                        PUSH ESI
005FDB5B  57                        PUSH EDI
005FDB5C  8B F9                     MOV EDI,ECX
005FDB5E  85 C0                     TEST EAX,EAX
005FDB60  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
005FDB63  7C 08                     JL 0x005fdb6d
005FDB65  8D 48 01                  LEA ECX,[EAX + 0x1]
005FDB68  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
005FDB6B  EB 0B                     JMP 0x005fdb78
LAB_005fdb6d:
005FDB6D  8B 97 26 02 00 00         MOV EDX,dword ptr [EDI + 0x226]
005FDB73  33 C0                     XOR EAX,EAX
005FDB75  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
LAB_005fdb78:
005FDB78  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005FDB7B  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005FDB7E  3B C1                     CMP EAX,ECX
005FDB80  0F 8D 4D 05 00 00         JGE 0x005fe0d3
005FDB86  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
005FDB89  8D 1C C8                  LEA EBX,[EAX + ECX*0x8]
005FDB8C  D1 E3                     SHL EBX,0x1
005FDB8E  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_005fdb91:
005FDB91  8B 97 33 02 00 00         MOV EDX,dword ptr [EDI + 0x233]
005FDB97  8B 44 13 39               MOV EAX,dword ptr [EBX + EDX*0x1 + 0x39]
005FDB9B  8D 0C 13                  LEA ECX,[EBX + EDX*0x1]
005FDB9E  83 F8 04                  CMP EAX,0x4
005FDBA1  0F 84 14 05 00 00         JZ 0x005fe0bb
005FDBA7  83 F8 05                  CMP EAX,0x5
005FDBAA  0F 84 0B 05 00 00         JZ 0x005fe0bb
005FDBB0  8B 71 42                  MOV ESI,dword ptr [ECX + 0x42]
005FDBB3  85 F6                     TEST ESI,ESI
005FDBB5  0F 84 00 05 00 00         JZ 0x005fe0bb
005FDBBB  33 C9                     XOR ECX,ECX
005FDBBD  83 F8 02                  CMP EAX,0x2
005FDBC0  0F 94 C1                  SETZ CL
005FDBC3  33 D2                     XOR EDX,EDX
005FDBC5  39 55 0C                  CMP dword ptr [EBP + 0xc],EDX
005FDBC8  0F 9C C2                  SETL DL
005FDBCB  85 CA                     TEST EDX,ECX
005FDBCD  0F 85 E8 04 00 00         JNZ 0x005fe0bb
005FDBD3  83 F8 01                  CMP EAX,0x1
005FDBD6  0F 84 CC 02 00 00         JZ 0x005fdea8
005FDBDC  83 F8 02                  CMP EAX,0x2
005FDBDF  0F 84 C3 02 00 00         JZ 0x005fdea8
005FDBE5  83 F8 03                  CMP EAX,0x3
005FDBE8  0F 85 CD 04 00 00         JNZ 0x005fe0bb
005FDBEE  85 F6                     TEST ESI,ESI
005FDBF0  0F 84 DD 04 00 00         JZ 0x005fe0d3
005FDBF6  6A 0D                     PUSH 0xd
005FDBF8  8B CE                     MOV ECX,ESI
005FDBFA  E8 65 66 E0 FF            CALL 0x00404264
005FDBFF  8B CE                     MOV ECX,ESI
005FDC01  E8 8A 4E E0 FF            CALL 0x00402a90
005FDC06  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005FDC09  85 C0                     TEST EAX,EAX
005FDC0B  0F 84 8B 02 00 00         JZ 0x005fde9c
005FDC11  8B 47 1C                  MOV EAX,dword ptr [EDI + 0x1c]
005FDC14  6A 1D                     PUSH 0x1d
005FDC16  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
005FDC1C  05 39 30 00 00            ADD EAX,0x3039
005FDC21  89 47 1C                  MOV dword ptr [EDI + 0x1c],EAX
005FDC24  8B 15 74 67 80 00         MOV EDX,dword ptr [0x00806774]
005FDC2A  C1 E8 10                  SHR EAX,0x10
005FDC2D  83 E0 01                  AND EAX,0x1
005FDC30  8B 0C 85 34 E9 7C 00      MOV ECX,dword ptr [EAX*0x4 + 0x7ce934]
005FDC37  51                        PUSH ECX
005FDC38  52                        PUSH EDX
005FDC39  6A 0D                     PUSH 0xd
005FDC3B  8B CE                     MOV ECX,ESI
005FDC3D  E8 41 65 E0 FF            CALL 0x00404183
005FDC42  85 C0                     TEST EAX,EAX
005FDC44  0F 85 AC 04 00 00         JNZ 0x005fe0f6
005FDC4A  A1 64 67 80 00            MOV EAX,[0x00806764]
005FDC4F  6A 1D                     PUSH 0x1d
005FDC51  68 2C E9 7C 00            PUSH 0x7ce92c
005FDC56  50                        PUSH EAX
005FDC57  6A 0F                     PUSH 0xf
005FDC59  8B CE                     MOV ECX,ESI
005FDC5B  E8 23 65 E0 FF            CALL 0x00404183
005FDC60  85 C0                     TEST EAX,EAX
005FDC62  0F 85 8E 04 00 00         JNZ 0x005fe0f6
005FDC68  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
005FDC6E  6A 1D                     PUSH 0x1d
005FDC70  68 3C E9 7C 00            PUSH 0x7ce93c
005FDC75  51                        PUSH ECX
005FDC76  6A 0E                     PUSH 0xe
005FDC78  8B CE                     MOV ECX,ESI
005FDC7A  E8 04 65 E0 FF            CALL 0x00404183
005FDC7F  85 C0                     TEST EAX,EAX
005FDC81  0F 85 6F 04 00 00         JNZ 0x005fe0f6
005FDC87  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
005FDC8D  8B CE                     MOV ECX,ESI
005FDC8F  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
005FDC95  50                        PUSH EAX
005FDC96  6A 0E                     PUSH 0xe
005FDC98  E8 A3 75 E0 FF            CALL 0x00405240
005FDC9D  8B 8F 33 02 00 00         MOV ECX,dword ptr [EDI + 0x233]
005FDCA3  6A 0F                     PUSH 0xf
005FDCA5  C6 44 0B 28 01            MOV byte ptr [EBX + ECX*0x1 + 0x28],0x1
005FDCAA  8B CE                     MOV ECX,ESI
005FDCAC  E8 23 46 E0 FF            CALL 0x004022d4
005FDCB1  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
005FDCB7  8B CE                     MOV ECX,ESI
005FDCB9  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
005FDCBF  50                        PUSH EAX
005FDCC0  6A 0D                     PUSH 0xd
005FDCC2  E8 79 75 E0 FF            CALL 0x00405240
005FDCC7  8B 0D B8 32 80 00         MOV ECX,dword ptr [0x008032b8]
005FDCCD  6A 10                     PUSH 0x10
005FDCCF  51                        PUSH ECX
005FDCD0  8B CE                     MOV ECX,ESI
005FDCD2  E8 17 68 E0 FF            CALL 0x004044ee
005FDCD7  6A 0E                     PUSH 0xe
005FDCD9  8B CE                     MOV ECX,ESI
005FDCDB  E8 53 55 E0 FF            CALL 0x00403233
005FDCE0  8B 97 33 02 00 00         MOV EDX,dword ptr [EDI + 0x233]
005FDCE6  0F BF 4C 13 0A            MOVSX ECX,word ptr [EBX + EDX*0x1 + 0xa]
005FDCEB  8D 04 13                  LEA EAX,[EBX + EDX*0x1]
005FDCEE  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
005FDCF1  DB 45 EC                  FILD dword ptr [EBP + -0x14]
005FDCF4  0F BF 50 08               MOVSX EDX,word ptr [EAX + 0x8]
005FDCF8  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005FDCFE  51                        PUSH ECX
005FDCFF  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
005FDD02  0F BF 40 06               MOVSX EAX,word ptr [EAX + 0x6]
005FDD06  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005FDD0C  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
005FDD12  D9 1C 24                  FSTP float ptr [ESP]
005FDD15  DB 45 EC                  FILD dword ptr [EBP + -0x14]
005FDD18  51                        PUSH ECX
005FDD19  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
005FDD1C  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005FDD22  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005FDD28  D9 1C 24                  FSTP float ptr [ESP]
005FDD2B  DB 45 EC                  FILD dword ptr [EBP + -0x14]
005FDD2E  51                        PUSH ECX
005FDD2F  8B CE                     MOV ECX,ESI
005FDD31  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005FDD37  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005FDD3D  D9 1C 24                  FSTP float ptr [ESP]
005FDD40  E8 94 68 E0 FF            CALL 0x004045d9
005FDD45  8B 8F 33 02 00 00         MOV ECX,dword ptr [EDI + 0x233]
005FDD4B  C6 44 0B 41 01            MOV byte ptr [EBX + ECX*0x1 + 0x41],0x1
005FDD50  A1 88 2A 80 00            MOV EAX,[0x00802a88]
005FDD55  85 C0                     TEST EAX,EAX
005FDD57  0F 84 5E 03 00 00         JZ 0x005fe0bb
005FDD5D  8B 97 33 02 00 00         MOV EDX,dword ptr [EDI + 0x233]
005FDD63  66 8B 44 13 0A            MOV AX,word ptr [EBX + EDX*0x1 + 0xa]
005FDD68  8D 3C 13                  LEA EDI,[EBX + EDX*0x1]
005FDD6B  66 85 C0                  TEST AX,AX
005FDD6E  0F BF C8                  MOVSX ECX,AX
005FDD71  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005FDD76  7C 11                     JL 0x005fdd89
005FDD78  F7 E9                     IMUL ECX
005FDD7A  C1 FA 06                  SAR EDX,0x6
005FDD7D  8B C2                     MOV EAX,EDX
005FDD7F  C1 E8 1F                  SHR EAX,0x1f
005FDD82  03 D0                     ADD EDX,EAX
005FDD84  0F BF DA                  MOVSX EBX,DX
005FDD87  EB 10                     JMP 0x005fdd99
LAB_005fdd89:
005FDD89  F7 E9                     IMUL ECX
005FDD8B  C1 FA 06                  SAR EDX,0x6
005FDD8E  8B CA                     MOV ECX,EDX
005FDD90  C1 E9 1F                  SHR ECX,0x1f
005FDD93  03 D1                     ADD EDX,ECX
005FDD95  0F BF DA                  MOVSX EBX,DX
005FDD98  4B                        DEC EBX
LAB_005fdd99:
005FDD99  66 8B 47 08               MOV AX,word ptr [EDI + 0x8]
005FDD9D  66 85 C0                  TEST AX,AX
005FDDA0  0F BF C8                  MOVSX ECX,AX
005FDDA3  B8 79 19 8C 02            MOV EAX,0x28c1979
005FDDA8  7C 10                     JL 0x005fddba
005FDDAA  F7 E9                     IMUL ECX
005FDDAC  D1 FA                     SAR EDX,0x1
005FDDAE  8B C2                     MOV EAX,EDX
005FDDB0  C1 E8 1F                  SHR EAX,0x1f
005FDDB3  03 D0                     ADD EDX,EAX
005FDDB5  0F BF CA                  MOVSX ECX,DX
005FDDB8  EB 0F                     JMP 0x005fddc9
LAB_005fddba:
005FDDBA  F7 E9                     IMUL ECX
005FDDBC  D1 FA                     SAR EDX,0x1
005FDDBE  8B CA                     MOV ECX,EDX
005FDDC0  C1 E9 1F                  SHR ECX,0x1f
005FDDC3  03 D1                     ADD EDX,ECX
005FDDC5  0F BF CA                  MOVSX ECX,DX
005FDDC8  49                        DEC ECX
LAB_005fddc9:
005FDDC9  66 8B 47 06               MOV AX,word ptr [EDI + 0x6]
005FDDCD  66 85 C0                  TEST AX,AX
005FDDD0  0F BF D0                  MOVSX EDX,AX
005FDDD3  B8 79 19 8C 02            MOV EAX,0x28c1979
005FDDD8  7C 10                     JL 0x005fddea
005FDDDA  F7 EA                     IMUL EDX
005FDDDC  D1 FA                     SAR EDX,0x1
005FDDDE  8B C2                     MOV EAX,EDX
005FDDE0  C1 E8 1F                  SHR EAX,0x1f
005FDDE3  03 D0                     ADD EDX,EAX
005FDDE5  0F BF C2                  MOVSX EAX,DX
005FDDE8  EB 0F                     JMP 0x005fddf9
LAB_005fddea:
005FDDEA  F7 EA                     IMUL EDX
005FDDEC  D1 FA                     SAR EDX,0x1
005FDDEE  8B C2                     MOV EAX,EDX
005FDDF0  C1 E8 1F                  SHR EAX,0x1f
005FDDF3  03 D0                     ADD EDX,EAX
005FDDF5  0F BF C2                  MOVSX EAX,DX
005FDDF8  48                        DEC EAX
LAB_005fddf9:
005FDDF9  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
005FDDFF  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
005FDE05  80 FA FF                  CMP DL,0xff
005FDE08  0F 84 A7 02 00 00         JZ 0x005fe0b5
005FDE0E  8B 97 F8 00 00 00         MOV EDX,dword ptr [EDI + 0xf8]
005FDE14  85 D2                     TEST EDX,EDX
005FDE16  0F 84 99 02 00 00         JZ 0x005fe0b5
005FDE1C  8D 55 E4                  LEA EDX,[EBP + -0x1c]
005FDE1F  52                        PUSH EDX
005FDE20  8D 55 E8                  LEA EDX,[EBP + -0x18]
005FDE23  52                        PUSH EDX
005FDE24  51                        PUSH ECX
005FDE25  50                        PUSH EAX
005FDE26  8B 87 0C 01 00 00         MOV EAX,dword ptr [EDI + 0x10c]
005FDE2C  50                        PUSH EAX
005FDE2D  8B CF                     MOV ECX,EDI
005FDE2F  E8 1F 61 E0 FF            CALL 0x00403f53
005FDE34  85 DB                     TEST EBX,EBX
005FDE36  0F 8C 79 02 00 00         JL 0x005fe0b5
005FDE3C  83 FB 05                  CMP EBX,0x5
005FDE3F  0F 8D 70 02 00 00         JGE 0x005fe0b5
005FDE45  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
005FDE48  85 D2                     TEST EDX,EDX
005FDE4A  0F 8C 65 02 00 00         JL 0x005fe0b5
005FDE50  8B 4F 30                  MOV ECX,dword ptr [EDI + 0x30]
005FDE53  3B D1                     CMP EDX,ECX
005FDE55  0F 8D 5A 02 00 00         JGE 0x005fe0b5
005FDE5B  8B 04 9D D0 AE 79 00      MOV EAX,dword ptr [EBX*0x4 + 0x79aed0]
005FDE62  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
005FDE65  03 C3                     ADD EAX,EBX
005FDE67  85 C0                     TEST EAX,EAX
005FDE69  0F 8C 46 02 00 00         JL 0x005fe0b5
005FDE6F  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
005FDE72  0F 8D 3D 02 00 00         JGE 0x005fe0b5
005FDE78  8B 7F 4C                  MOV EDI,dword ptr [EDI + 0x4c]
005FDE7B  85 FF                     TEST EDI,EDI
005FDE7D  0F 84 32 02 00 00         JZ 0x005fe0b5
005FDE83  0F AF C1                  IMUL EAX,ECX
005FDE86  03 C7                     ADD EAX,EDI
005FDE88  33 C9                     XOR ECX,ECX
005FDE8A  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
005FDE8D  8B C1                     MOV EAX,ECX
005FDE8F  85 C0                     TEST EAX,EAX
005FDE91  0F 85 1E 02 00 00         JNZ 0x005fe0b5
005FDE97  E9 01 02 00 00            JMP 0x005fe09d
LAB_005fde9c:
005FDE9C  8B CE                     MOV ECX,ESI
005FDE9E  E8 32 43 E0 FF            CALL 0x004021d5
005FDEA3  E9 13 02 00 00            JMP 0x005fe0bb
LAB_005fdea8:
005FDEA8  8B 15 CC 73 80 00         MOV EDX,dword ptr [0x008073cc]
005FDEAE  6A 11                     PUSH 0x11
005FDEB0  68 8C 00 00 00            PUSH 0x8c
005FDEB5  68 B4 00 00 00            PUSH 0xb4
005FDEBA  6A 00                     PUSH 0x0
005FDEBC  6A 45                     PUSH 0x45
005FDEBE  6A 5A                     PUSH 0x5a
005FDEC0  52                        PUSH EDX
005FDEC1  8B CE                     MOV ECX,ESI
005FDEC3  E8 B3 74 E0 FF            CALL 0x0040537b
005FDEC8  85 C0                     TEST EAX,EAX
005FDECA  0F 85 0E 02 00 00         JNZ 0x005fe0de
005FDED0  A1 74 67 80 00            MOV EAX,[0x00806774]
005FDED5  6A 1D                     PUSH 0x1d
005FDED7  68 24 E9 7C 00            PUSH 0x7ce924
005FDEDC  50                        PUSH EAX
005FDEDD  6A 0D                     PUSH 0xd
005FDEDF  8B CE                     MOV ECX,ESI
005FDEE1  E8 9D 62 E0 FF            CALL 0x00404183
005FDEE6  85 C0                     TEST EAX,EAX
005FDEE8  0F 85 08 02 00 00         JNZ 0x005fe0f6
005FDEEE  6A 45                     PUSH 0x45
005FDEF0  6A 5A                     PUSH 0x5a
005FDEF2  8B CE                     MOV ECX,ESI
005FDEF4  E8 CB 44 E0 FF            CALL 0x004023c4
005FDEF9  8B 8F 33 02 00 00         MOV ECX,dword ptr [EDI + 0x233]
005FDEFF  51                        PUSH ECX
005FDF00  0F BF 54 0B 0A            MOVSX EDX,word ptr [EBX + ECX*0x1 + 0xa]
005FDF05  8D 04 0B                  LEA EAX,[EBX + ECX*0x1]
005FDF08  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
005FDF0B  DB 45 EC                  FILD dword ptr [EBP + -0x14]
005FDF0E  0F BF 48 08               MOVSX ECX,word ptr [EAX + 0x8]
005FDF12  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005FDF18  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
005FDF1B  0F BF 50 06               MOVSX EDX,word ptr [EAX + 0x6]
005FDF1F  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005FDF25  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
005FDF2B  D9 1C 24                  FSTP float ptr [ESP]
005FDF2E  DB 45 EC                  FILD dword ptr [EBP + -0x14]
005FDF31  51                        PUSH ECX
005FDF32  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
005FDF35  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005FDF3B  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005FDF41  D9 1C 24                  FSTP float ptr [ESP]
005FDF44  DB 45 EC                  FILD dword ptr [EBP + -0x14]
005FDF47  51                        PUSH ECX
005FDF48  8B CE                     MOV ECX,ESI
005FDF4A  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005FDF50  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005FDF56  D9 1C 24                  FSTP float ptr [ESP]
005FDF59  E8 7B 66 E0 FF            CALL 0x004045d9
005FDF5E  A1 38 2A 80 00            MOV EAX,[0x00802a38]
005FDF63  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
005FDF69  51                        PUSH ECX
005FDF6A  6A 0D                     PUSH 0xd
005FDF6C  8B CE                     MOV ECX,ESI
005FDF6E  E8 CD 72 E0 FF            CALL 0x00405240
005FDF73  8B 97 33 02 00 00         MOV EDX,dword ptr [EDI + 0x233]
005FDF79  C6 44 13 41 01            MOV byte ptr [EBX + EDX*0x1 + 0x41],0x1
005FDF7E  A1 88 2A 80 00            MOV EAX,[0x00802a88]
005FDF83  85 C0                     TEST EAX,EAX
005FDF85  0F 84 30 01 00 00         JZ 0x005fe0bb
005FDF8B  8B 87 33 02 00 00         MOV EAX,dword ptr [EDI + 0x233]
005FDF91  8D 3C 03                  LEA EDI,[EBX + EAX*0x1]
005FDF94  66 8B 44 03 0A            MOV AX,word ptr [EBX + EAX*0x1 + 0xa]
005FDF99  66 85 C0                  TEST AX,AX
005FDF9C  0F BF C8                  MOVSX ECX,AX
005FDF9F  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005FDFA4  7C 11                     JL 0x005fdfb7
005FDFA6  F7 E9                     IMUL ECX
005FDFA8  C1 FA 06                  SAR EDX,0x6
005FDFAB  8B CA                     MOV ECX,EDX
005FDFAD  C1 E9 1F                  SHR ECX,0x1f
005FDFB0  03 D1                     ADD EDX,ECX
005FDFB2  0F BF DA                  MOVSX EBX,DX
005FDFB5  EB 10                     JMP 0x005fdfc7
LAB_005fdfb7:
005FDFB7  F7 E9                     IMUL ECX
005FDFB9  C1 FA 06                  SAR EDX,0x6
005FDFBC  8B C2                     MOV EAX,EDX
005FDFBE  C1 E8 1F                  SHR EAX,0x1f
005FDFC1  03 D0                     ADD EDX,EAX
005FDFC3  0F BF DA                  MOVSX EBX,DX
005FDFC6  4B                        DEC EBX
LAB_005fdfc7:
005FDFC7  66 8B 47 08               MOV AX,word ptr [EDI + 0x8]
005FDFCB  66 85 C0                  TEST AX,AX
005FDFCE  0F BF C8                  MOVSX ECX,AX
005FDFD1  B8 79 19 8C 02            MOV EAX,0x28c1979
005FDFD6  7C 10                     JL 0x005fdfe8
005FDFD8  F7 E9                     IMUL ECX
005FDFDA  D1 FA                     SAR EDX,0x1
005FDFDC  8B CA                     MOV ECX,EDX
005FDFDE  C1 E9 1F                  SHR ECX,0x1f
005FDFE1  03 D1                     ADD EDX,ECX
005FDFE3  0F BF CA                  MOVSX ECX,DX
005FDFE6  EB 0F                     JMP 0x005fdff7
LAB_005fdfe8:
005FDFE8  F7 E9                     IMUL ECX
005FDFEA  D1 FA                     SAR EDX,0x1
005FDFEC  8B C2                     MOV EAX,EDX
005FDFEE  C1 E8 1F                  SHR EAX,0x1f
005FDFF1  03 D0                     ADD EDX,EAX
005FDFF3  0F BF CA                  MOVSX ECX,DX
005FDFF6  49                        DEC ECX
LAB_005fdff7:
005FDFF7  66 8B 47 06               MOV AX,word ptr [EDI + 0x6]
005FDFFB  66 85 C0                  TEST AX,AX
005FDFFE  0F BF D0                  MOVSX EDX,AX
005FE001  B8 79 19 8C 02            MOV EAX,0x28c1979
005FE006  7C 10                     JL 0x005fe018
005FE008  F7 EA                     IMUL EDX
005FE00A  D1 FA                     SAR EDX,0x1
005FE00C  8B C2                     MOV EAX,EDX
005FE00E  C1 E8 1F                  SHR EAX,0x1f
005FE011  03 D0                     ADD EDX,EAX
005FE013  0F BF C2                  MOVSX EAX,DX
005FE016  EB 0F                     JMP 0x005fe027
LAB_005fe018:
005FE018  F7 EA                     IMUL EDX
005FE01A  D1 FA                     SAR EDX,0x1
005FE01C  8B C2                     MOV EAX,EDX
005FE01E  C1 E8 1F                  SHR EAX,0x1f
005FE021  03 D0                     ADD EDX,EAX
005FE023  0F BF C2                  MOVSX EAX,DX
005FE026  48                        DEC EAX
LAB_005fe027:
005FE027  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
005FE02D  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
005FE033  80 FA FF                  CMP DL,0xff
005FE036  74 7D                     JZ 0x005fe0b5
005FE038  8B 97 F8 00 00 00         MOV EDX,dword ptr [EDI + 0xf8]
005FE03E  85 D2                     TEST EDX,EDX
005FE040  74 73                     JZ 0x005fe0b5
005FE042  8D 55 DC                  LEA EDX,[EBP + -0x24]
005FE045  52                        PUSH EDX
005FE046  8D 55 E0                  LEA EDX,[EBP + -0x20]
005FE049  52                        PUSH EDX
005FE04A  51                        PUSH ECX
005FE04B  50                        PUSH EAX
005FE04C  8B 87 0C 01 00 00         MOV EAX,dword ptr [EDI + 0x10c]
005FE052  50                        PUSH EAX
005FE053  8B CF                     MOV ECX,EDI
005FE055  E8 F9 5E E0 FF            CALL 0x00403f53
005FE05A  85 DB                     TEST EBX,EBX
005FE05C  7C 57                     JL 0x005fe0b5
005FE05E  83 FB 05                  CMP EBX,0x5
005FE061  7D 52                     JGE 0x005fe0b5
005FE063  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
005FE066  85 D2                     TEST EDX,EDX
005FE068  7C 4B                     JL 0x005fe0b5
005FE06A  8B 4F 30                  MOV ECX,dword ptr [EDI + 0x30]
005FE06D  3B D1                     CMP EDX,ECX
005FE06F  7D 44                     JGE 0x005fe0b5
005FE071  8B 04 9D D0 AE 79 00      MOV EAX,dword ptr [EBX*0x4 + 0x79aed0]
005FE078  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
005FE07B  03 C3                     ADD EAX,EBX
005FE07D  85 C0                     TEST EAX,EAX
005FE07F  7C 34                     JL 0x005fe0b5
005FE081  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
005FE084  7D 2F                     JGE 0x005fe0b5
005FE086  8B 7F 4C                  MOV EDI,dword ptr [EDI + 0x4c]
005FE089  85 FF                     TEST EDI,EDI
005FE08B  74 28                     JZ 0x005fe0b5
005FE08D  0F AF C1                  IMUL EAX,ECX
005FE090  03 C7                     ADD EAX,EDI
005FE092  33 C9                     XOR ECX,ECX
005FE094  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
005FE097  8B C1                     MOV EAX,ECX
005FE099  85 C0                     TEST EAX,EAX
005FE09B  75 18                     JNZ 0x005fe0b5
LAB_005fe09d:
005FE09D  8B CE                     MOV ECX,ESI
005FE09F  E8 6B 5C E0 FF            CALL 0x00403d0f
005FE0A4  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005FE0A7  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005FE0AA  8B 82 33 02 00 00         MOV EAX,dword ptr [EDX + 0x233]
005FE0B0  C6 44 01 41 00            MOV byte ptr [ECX + EAX*0x1 + 0x41],0x0
LAB_005fe0b5:
005FE0B5  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
005FE0B8  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_005fe0bb:
005FE0BB  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005FE0BE  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005FE0C1  40                        INC EAX
005FE0C2  83 C3 52                  ADD EBX,0x52
005FE0C5  3B C1                     CMP EAX,ECX
005FE0C7  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005FE0CA  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
005FE0CD  0F 8C BE FA FF FF         JL 0x005fdb91
LAB_005fe0d3:
005FE0D3  5F                        POP EDI
005FE0D4  5E                        POP ESI
005FE0D5  33 C0                     XOR EAX,EAX
005FE0D7  5B                        POP EBX
005FE0D8  8B E5                     MOV ESP,EBP
005FE0DA  5D                        POP EBP
005FE0DB  C2 08 00                  RET 0x8
LAB_005fe0de:
005FE0DE  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
005FE0E4  68 3D 01 00 00            PUSH 0x13d
005FE0E9  68 C8 EB 7C 00            PUSH 0x7cebc8
005FE0EE  52                        PUSH EDX
005FE0EF  6A FF                     PUSH -0x1
005FE0F1  E8 4A 7D 0A 00            CALL 0x006a5e40
LAB_005fe0f6:
005FE0F6  5F                        POP EDI
005FE0F7  5E                        POP ESI
005FE0F8  B8 FF FF 00 00            MOV EAX,0xffff
005FE0FD  5B                        POP EBX
005FE0FE  8B E5                     MOV ESP,EBP
005FE100  5D                        POP EBP
005FE101  C2 08 00                  RET 0x8
