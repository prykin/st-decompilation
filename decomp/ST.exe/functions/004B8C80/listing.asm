FUN_004b8c80:
004B8C80  55                        PUSH EBP
004B8C81  8B EC                     MOV EBP,ESP
004B8C83  83 EC 28                  SUB ESP,0x28
004B8C86  53                        PUSH EBX
004B8C87  56                        PUSH ESI
004B8C88  8B F1                     MOV ESI,ECX
004B8C8A  57                        PUSH EDI
004B8C8B  33 FF                     XOR EDI,EDI
004B8C8D  8B 86 45 02 00 00         MOV EAX,dword ptr [ESI + 0x245]
004B8C93  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004B8C96  48                        DEC EAX
004B8C97  0F 84 80 07 00 00         JZ 0x004b941d
004B8C9D  BB 04 00 00 00            MOV EBX,0x4
004B8CA2  2B C3                     SUB EAX,EBX
004B8CA4  0F 84 99 04 00 00         JZ 0x004b9143
004B8CAA  48                        DEC EAX
004B8CAB  0F 85 CF 04 00 00         JNZ 0x004b9180
004B8CB1  39 9E BC 04 00 00         CMP dword ptr [ESI + 0x4bc],EBX
004B8CB7  0F 85 F4 02 00 00         JNZ 0x004b8fb1
004B8CBD  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
004B8CC3  53                        PUSH EBX
004B8CC4  8B CF                     MOV ECX,EDI
004B8CC6  E8 E4 B5 F4 FF            CALL 0x004042af
004B8CCB  83 F8 15                  CMP EAX,0x15
004B8CCE  0F 85 95 00 00 00         JNZ 0x004b8d69
004B8CD4  6A 0E                     PUSH 0xe
004B8CD6  8B CF                     MOV ECX,EDI
004B8CD8  E8 87 B5 F4 FF            CALL 0x00404264
004B8CDD  6A 0D                     PUSH 0xd
004B8CDF  8B CF                     MOV ECX,EDI
004B8CE1  E8 7E B5 F4 FF            CALL 0x00404264
004B8CE6  6A 0C                     PUSH 0xc
004B8CE8  8B CF                     MOV ECX,EDI
004B8CEA  E8 75 B5 F4 FF            CALL 0x00404264
004B8CEF  6A 09                     PUSH 0x9
004B8CF1  8B CF                     MOV ECX,EDI
004B8CF3  E8 6C B5 F4 FF            CALL 0x00404264
004B8CF8  6A 08                     PUSH 0x8
004B8CFA  8B CF                     MOV ECX,EDI
004B8CFC  E8 63 B5 F4 FF            CALL 0x00404264
004B8D01  6A 07                     PUSH 0x7
004B8D03  8B CF                     MOV ECX,EDI
004B8D05  E8 5A B5 F4 FF            CALL 0x00404264
004B8D0A  6A 10                     PUSH 0x10
004B8D0C  8B CF                     MOV ECX,EDI
004B8D0E  E8 51 B5 F4 FF            CALL 0x00404264
004B8D13  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004B8D19  8B 0C 85 10 1A 79 00      MOV ECX,dword ptr [EAX*0x4 + 0x791a10]
004B8D20  85 C9                     TEST ECX,ECX
004B8D22  74 07                     JZ 0x004b8d2b
004B8D24  8B CE                     MOV ECX,ESI
004B8D26  E8 EB A8 F4 FF            CALL 0x00403616
LAB_004b8d2b:
004B8D2B  8B CE                     MOV ECX,ESI
004B8D2D  E8 36 CA F4 FF            CALL 0x00405768
004B8D32  6A 05                     PUSH 0x5
004B8D34  8B CF                     MOV ECX,EDI
004B8D36  E8 29 B5 F4 FF            CALL 0x00404264
004B8D3B  8B 16                     MOV EDX,dword ptr [ESI]
004B8D3D  8B CE                     MOV ECX,ESI
004B8D3F  FF 52 08                  CALL dword ptr [EDX + 0x8]
004B8D42  85 C0                     TEST EAX,EAX
004B8D44  0F 84 E6 03 00 00         JZ 0x004b9130
004B8D4A  8B 06                     MOV EAX,dword ptr [ESI]
004B8D4C  6A 00                     PUSH 0x0
004B8D4E  8B CE                     MOV ECX,ESI
004B8D50  FF 90 E8 00 00 00         CALL dword ptr [EAX + 0xe8]
004B8D56  8B 06                     MOV EAX,dword ptr [ESI]
004B8D58  8B CE                     MOV ECX,ESI
004B8D5A  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
004B8D60  5F                        POP EDI
004B8D61  5E                        POP ESI
004B8D62  33 C0                     XOR EAX,EAX
004B8D64  5B                        POP EBX
004B8D65  8B E5                     MOV ESP,EBP
004B8D67  5D                        POP EBP
004B8D68  C3                        RET
LAB_004b8d69:
004B8D69  53                        PUSH EBX
004B8D6A  8B CF                     MOV ECX,EDI
004B8D6C  E8 3E B5 F4 FF            CALL 0x004042af
004B8D71  8B 8E F5 01 00 00         MOV ECX,dword ptr [ESI + 0x1f5]
004B8D77  3B 81 A4 00 00 00         CMP EAX,dword ptr [ECX + 0xa4]
004B8D7D  0F 85 AD 03 00 00         JNZ 0x004b9130
004B8D83  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004B8D89  8B 8E 39 02 00 00         MOV ECX,dword ptr [ESI + 0x239]
004B8D8F  33 FF                     XOR EDI,EDI
004B8D91  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004B8D94  03 D1                     ADD EDX,ECX
004B8D96  8B 0C 95 50 1C 7E 00      MOV ECX,dword ptr [EDX*0x4 + 0x7e1c50]
004B8D9D  3B CF                     CMP ECX,EDI
004B8D9F  74 33                     JZ 0x004b8dd4
004B8DA1  8B 86 D7 05 00 00         MOV EAX,dword ptr [ESI + 0x5d7]
004B8DA7  0F AF C1                  IMUL EAX,ECX
004B8DAA  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004B8DAD  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004B8DB0  B8 AD 8B DB 68            MOV EAX,0x68db8bad
004B8DB5  C1 E1 02                  SHL ECX,0x2
004B8DB8  F7 E9                     IMUL ECX
004B8DBA  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004B8DBD  C1 FA 0C                  SAR EDX,0xc
004B8DC0  8B C2                     MOV EAX,EDX
004B8DC2  C1 E8 1F                  SHR EAX,0x1f
004B8DC5  03 D0                     ADD EDX,EAX
004B8DC7  52                        PUSH EDX
004B8DC8  51                        PUSH ECX
004B8DC9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004B8DCF  E8 3E B6 F4 FF            CALL 0x00404412
LAB_004b8dd4:
004B8DD4  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004B8DDA  8B 8E 39 02 00 00         MOV ECX,dword ptr [ESI + 0x239]
004B8DE0  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004B8DE3  03 D1                     ADD EDX,ECX
004B8DE5  8B 0C 95 FC 24 7E 00      MOV ECX,dword ptr [EDX*0x4 + 0x7e24fc]
004B8DEC  3B CF                     CMP ECX,EDI
004B8DEE  74 33                     JZ 0x004b8e23
004B8DF0  8B 86 D7 05 00 00         MOV EAX,dword ptr [ESI + 0x5d7]
004B8DF6  0F AF C1                  IMUL EAX,ECX
004B8DF9  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004B8DFC  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004B8DFF  B8 AD 8B DB 68            MOV EAX,0x68db8bad
004B8E04  C1 E1 02                  SHL ECX,0x2
004B8E07  F7 E9                     IMUL ECX
004B8E09  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004B8E0C  C1 FA 0C                  SAR EDX,0xc
004B8E0F  8B C2                     MOV EAX,EDX
004B8E11  C1 E8 1F                  SHR EAX,0x1f
004B8E14  03 D0                     ADD EDX,EAX
004B8E16  52                        PUSH EDX
004B8E17  51                        PUSH ECX
004B8E18  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004B8E1E  E8 C4 C7 F4 FF            CALL 0x004055e7
LAB_004b8e23:
004B8E23  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004B8E29  8B 8E 39 02 00 00         MOV ECX,dword ptr [ESI + 0x239]
004B8E2F  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004B8E32  03 D1                     ADD EDX,ECX
004B8E34  8B 0C 95 AC 45 85 00      MOV ECX,dword ptr [EDX*0x4 + 0x8545ac]
004B8E3B  3B CF                     CMP ECX,EDI
004B8E3D  74 33                     JZ 0x004b8e72
004B8E3F  8B 86 D7 05 00 00         MOV EAX,dword ptr [ESI + 0x5d7]
004B8E45  0F AF C1                  IMUL EAX,ECX
004B8E48  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004B8E4B  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004B8E4E  B8 AD 8B DB 68            MOV EAX,0x68db8bad
004B8E53  C1 E1 02                  SHL ECX,0x2
004B8E56  F7 E9                     IMUL ECX
004B8E58  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004B8E5B  C1 FA 0C                  SAR EDX,0xc
004B8E5E  8B C2                     MOV EAX,EDX
004B8E60  C1 E8 1F                  SHR EAX,0x1f
004B8E63  03 D0                     ADD EDX,EAX
004B8E65  52                        PUSH EDX
004B8E66  51                        PUSH ECX
004B8E67  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004B8E6D  E8 C4 B4 F4 FF            CALL 0x00404336
LAB_004b8e72:
004B8E72  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004B8E78  8B 8E 39 02 00 00         MOV ECX,dword ptr [ESI + 0x239]
004B8E7E  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004B8E81  03 D1                     ADD EDX,ECX
004B8E83  8B 0C 95 60 31 7E 00      MOV ECX,dword ptr [EDX*0x4 + 0x7e3160]
004B8E8A  3B CF                     CMP ECX,EDI
004B8E8C  74 33                     JZ 0x004b8ec1
004B8E8E  8B 86 D7 05 00 00         MOV EAX,dword ptr [ESI + 0x5d7]
004B8E94  0F AF C1                  IMUL EAX,ECX
004B8E97  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004B8E9A  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004B8E9D  B8 AD 8B DB 68            MOV EAX,0x68db8bad
004B8EA2  C1 E1 02                  SHL ECX,0x2
004B8EA5  F7 E9                     IMUL ECX
004B8EA7  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004B8EAA  C1 FA 0C                  SAR EDX,0xc
004B8EAD  8B C2                     MOV EAX,EDX
004B8EAF  C1 E8 1F                  SHR EAX,0x1f
004B8EB2  03 D0                     ADD EDX,EAX
004B8EB4  52                        PUSH EDX
004B8EB5  51                        PUSH ECX
004B8EB6  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004B8EBC  E8 AA CF F4 FF            CALL 0x00405e6b
LAB_004b8ec1:
004B8EC1  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004B8EC4  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004B8ECA  52                        PUSH EDX
004B8ECB  E8 26 9A F4 FF            CALL 0x004028f6
004B8ED0  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
004B8ED3  33 C9                     XOR ECX,ECX
004B8ED5  8A 88 2D 11 00 00         MOV CL,byte ptr [EAX + 0x112d]
004B8EDB  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004B8EDE  3B C1                     CMP EAX,ECX
004B8EE0  75 0E                     JNZ 0x004b8ef0
004B8EE2  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004B8EE8  8A D0                     MOV DL,AL
004B8EEA  52                        PUSH EDX
004B8EEB  E8 9D BC F4 FF            CALL 0x00404b8d
LAB_004b8ef0:
004B8EF0  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
004B8EF3  33 C9                     XOR ECX,ECX
004B8EF5  8A 88 2D 11 00 00         MOV CL,byte ptr [EAX + 0x112d]
004B8EFB  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004B8EFE  3B C1                     CMP EAX,ECX
004B8F00  75 58                     JNZ 0x004b8f5a
004B8F02  8B 96 FD 01 00 00         MOV EDX,dword ptr [ESI + 0x1fd]
004B8F08  8B 86 F9 01 00 00         MOV EAX,dword ptr [ESI + 0x1f9]
004B8F0E  52                        PUSH EDX
004B8F0F  50                        PUSH EAX
004B8F10  57                        PUSH EDI
004B8F11  E8 45 9E F4 FF            CALL 0x00402d5b
004B8F16  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004B8F19  83 C4 0C                  ADD ESP,0xc
004B8F1C  51                        PUSH ECX
004B8F1D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004B8F23  E8 8F BA F4 FF            CALL 0x004049b7
004B8F28  25 FF 00 00 00            AND EAX,0xff
004B8F2D  48                        DEC EAX
004B8F2E  74 1C                     JZ 0x004b8f4c
004B8F30  48                        DEC EAX
004B8F31  74 09                     JZ 0x004b8f3c
004B8F33  48                        DEC EAX
004B8F34  75 24                     JNZ 0x004b8f5a
004B8F36  8B 16                     MOV EDX,dword ptr [ESI]
004B8F38  6A 6A                     PUSH 0x6a
004B8F3A  EB 14                     JMP 0x004b8f50
LAB_004b8f3c:
004B8F3C  8B 06                     MOV EAX,dword ptr [ESI]
004B8F3E  6A 69                     PUSH 0x69
004B8F40  6A 06                     PUSH 0x6
004B8F42  8B CE                     MOV ECX,ESI
004B8F44  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
004B8F4A  EB 0E                     JMP 0x004b8f5a
LAB_004b8f4c:
004B8F4C  8B 16                     MOV EDX,dword ptr [ESI]
004B8F4E  6A 68                     PUSH 0x68
LAB_004b8f50:
004B8F50  6A 06                     PUSH 0x6
004B8F52  8B CE                     MOV ECX,ESI
004B8F54  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
LAB_004b8f5a:
004B8F5A  57                        PUSH EDI
004B8F5B  6A 01                     PUSH 0x1
004B8F5D  8B CE                     MOV ECX,ESI
004B8F5F  89 BE 41 02 00 00         MOV dword ptr [ESI + 0x241],EDI
004B8F65  89 BE D7 05 00 00         MOV dword ptr [ESI + 0x5d7],EDI
004B8F6B  C7 86 DF 05 00 00 01 00 00 00  MOV dword ptr [ESI + 0x5df],0x1
004B8F75  E8 30 81 F4 FF            CALL 0x004010aa
004B8F7A  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
004B8F7D  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
004B8F80  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
004B8F83  8D 45 D8                  LEA EAX,[EBP + -0x28]
004B8F86  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
004B8F89  50                        PUSH EAX
004B8F8A  8B CE                     MOV ECX,ESI
004B8F8C  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
004B8F8F  C7 45 E8 0A 00 00 00      MOV dword ptr [EBP + -0x18],0xa
004B8F96  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
004B8F99  E8 02 D1 22 00            CALL 0x006e60a0
004B8F9E  8B 06                     MOV EAX,dword ptr [ESI]
004B8FA0  8B CE                     MOV ECX,ESI
004B8FA2  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
004B8FA8  5F                        POP EDI
004B8FA9  5E                        POP ESI
004B8FAA  33 C0                     XOR EAX,EAX
004B8FAC  5B                        POP EBX
004B8FAD  8B E5                     MOV ESP,EBP
004B8FAF  5D                        POP EBP
004B8FB0  C3                        RET
LAB_004b8fb1:
004B8FB1  8A 8E 3D 02 00 00         MOV CL,byte ptr [ESI + 0x23d]
004B8FB7  51                        PUSH ECX
004B8FB8  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004B8FBE  E8 F4 B9 F4 FF            CALL 0x004049b7
004B8FC3  3C 03                     CMP AL,0x3
004B8FC5  75 59                     JNZ 0x004b9020
004B8FC7  8A 96 3D 02 00 00         MOV DL,byte ptr [ESI + 0x23d]
004B8FCD  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004B8FD3  52                        PUSH EDX
004B8FD4  E8 DE B9 F4 FF            CALL 0x004049b7
004B8FD9  8A C8                     MOV CL,AL
004B8FDB  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004B8FE1  81 E1 FF 00 00 00         AND ECX,0xff
004B8FE7  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004B8FEA  B8 56 55 55 55            MOV EAX,0x55555556
004B8FEF  03 CA                     ADD ECX,EDX
004B8FF1  8B 0C 8D C0 3D 7E 00      MOV ECX,dword ptr [ECX*0x4 + 0x7e3dc0]
004B8FF8  F7 E9                     IMUL ECX
004B8FFA  8B 8E B8 04 00 00         MOV ECX,dword ptr [ESI + 0x4b8]
004B9000  8B C2                     MOV EAX,EDX
004B9002  C1 E8 1F                  SHR EAX,0x1f
004B9005  03 D0                     ADD EDX,EAX
004B9007  03 D1                     ADD EDX,ECX
004B9009  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004B900F  39 91 E4 00 00 00         CMP dword ptr [ECX + 0xe4],EDX
004B9015  0F 82 15 01 00 00         JC 0x004b9130
004B901B  E9 F2 00 00 00            JMP 0x004b9112
LAB_004b9020:
004B9020  6A 05                     PUSH 0x5
004B9022  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004B9028  E8 82 B2 F4 FF            CALL 0x004042af
004B902D  8B 96 F5 01 00 00         MOV EDX,dword ptr [ESI + 0x1f5]
004B9033  3B 82 C8 00 00 00         CMP EAX,dword ptr [EDX + 0xc8]
004B9039  0F 85 F1 00 00 00         JNZ 0x004b9130
004B903F  8B 86 BC 04 00 00         MOV EAX,dword ptr [ESI + 0x4bc]
004B9045  83 F8 01                  CMP EAX,0x1
004B9048  75 24                     JNZ 0x004b906e
004B904A  8B CE                     MOV ECX,ESI
004B904C  C7 86 BC 04 00 00 02 00 00 00  MOV dword ptr [ESI + 0x4bc],0x2
004B9056  E8 4C 92 F4 FF            CALL 0x004022a7
004B905B  8B 06                     MOV EAX,dword ptr [ESI]
004B905D  8B CE                     MOV ECX,ESI
004B905F  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
004B9065  5F                        POP EDI
004B9066  5E                        POP ESI
004B9067  33 C0                     XOR EAX,EAX
004B9069  5B                        POP EBX
004B906A  8B E5                     MOV ESP,EBP
004B906C  5D                        POP EBP
004B906D  C3                        RET
LAB_004b906e:
004B906E  83 F8 02                  CMP EAX,0x2
004B9071  0F 85 96 00 00 00         JNZ 0x004b910d
004B9077  8A 86 3D 02 00 00         MOV AL,byte ptr [ESI + 0x23d]
004B907D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004B9083  50                        PUSH EAX
004B9084  E8 2E B9 F4 FF            CALL 0x004049b7
004B9089  8A C8                     MOV CL,AL
004B908B  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004B9091  81 E1 FF 00 00 00         AND ECX,0xff
004B9097  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004B909A  B8 56 55 55 55            MOV EAX,0x55555556
004B909F  03 CA                     ADD ECX,EDX
004B90A1  8B 0C 8D C0 3D 7E 00      MOV ECX,dword ptr [ECX*0x4 + 0x7e3dc0]
004B90A8  F7 E9                     IMUL ECX
004B90AA  8B 8E B8 04 00 00         MOV ECX,dword ptr [ESI + 0x4b8]
004B90B0  8B C2                     MOV EAX,EDX
004B90B2  C1 E8 1F                  SHR EAX,0x1f
004B90B5  03 D0                     ADD EDX,EAX
004B90B7  03 D1                     ADD EDX,ECX
004B90B9  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004B90BF  39 91 E4 00 00 00         CMP dword ptr [ECX + 0xe4],EDX
004B90C5  72 69                     JC 0x004b9130
004B90C7  8B 16                     MOV EDX,dword ptr [ESI]
004B90C9  68 61 03 00 00            PUSH 0x361
004B90CE  6A 03                     PUSH 0x3
004B90D0  8B CE                     MOV ECX,ESI
004B90D2  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004B90D8  8B CE                     MOV ECX,ESI
004B90DA  C7 86 BC 04 00 00 03 00 00 00  MOV dword ptr [ESI + 0x4bc],0x3
004B90E4  E8 BE 91 F4 FF            CALL 0x004022a7
004B90E9  8B 06                     MOV EAX,dword ptr [ESI]
004B90EB  68 61 03 00 00            PUSH 0x361
004B90F0  6A 03                     PUSH 0x3
004B90F2  8B CE                     MOV ECX,ESI
004B90F4  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
004B90FA  8B 06                     MOV EAX,dword ptr [ESI]
004B90FC  8B CE                     MOV ECX,ESI
004B90FE  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
004B9104  5F                        POP EDI
004B9105  5E                        POP ESI
004B9106  33 C0                     XOR EAX,EAX
004B9108  5B                        POP EBX
004B9109  8B E5                     MOV ESP,EBP
004B910B  5D                        POP EBP
004B910C  C3                        RET
LAB_004b910d:
004B910D  83 F8 03                  CMP EAX,0x3
004B9110  75 1E                     JNZ 0x004b9130
LAB_004b9112:
004B9112  8B CE                     MOV ECX,ESI
004B9114  89 9E BC 04 00 00         MOV dword ptr [ESI + 0x4bc],EBX
004B911A  E8 88 91 F4 FF            CALL 0x004022a7
004B911F  8B 16                     MOV EDX,dword ptr [ESI]
004B9121  68 62 03 00 00            PUSH 0x362
004B9126  6A 03                     PUSH 0x3
004B9128  8B CE                     MOV ECX,ESI
004B912A  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
LAB_004b9130:
004B9130  8B 06                     MOV EAX,dword ptr [ESI]
004B9132  8B CE                     MOV ECX,ESI
004B9134  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
004B913A  5F                        POP EDI
004B913B  5E                        POP ESI
004B913C  33 C0                     XOR EAX,EAX
004B913E  5B                        POP EBX
004B913F  8B E5                     MOV ESP,EBP
004B9141  5D                        POP EBP
004B9142  C3                        RET
LAB_004b9143:
004B9143  39 BE 99 02 00 00         CMP dword ptr [ESI + 0x299],EDI
004B9149  74 35                     JZ 0x004b9180
004B914B  6A 0E                     PUSH 0xe
004B914D  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004B9153  E8 57 B1 F4 FF            CALL 0x004042af
004B9158  8B 8E F5 01 00 00         MOV ECX,dword ptr [ESI + 0x1f5]
004B915E  8B 91 08 02 00 00         MOV EDX,dword ptr [ECX + 0x208]
004B9164  8B 8E A1 02 00 00         MOV ECX,dword ptr [ESI + 0x2a1]
004B916A  03 D1                     ADD EDX,ECX
004B916C  3B C2                     CMP EAX,EDX
004B916E  7C 10                     JL 0x004b9180
004B9170  39 BE 9D 02 00 00         CMP dword ptr [ESI + 0x29d],EDI
004B9176  75 08                     JNZ 0x004b9180
004B9178  57                        PUSH EDI
004B9179  8B CE                     MOV ECX,ESI
004B917B  E8 7E AD F4 FF            CALL 0x00403efe
LAB_004b9180:
004B9180  8B 86 55 02 00 00         MOV EAX,dword ptr [ESI + 0x255]
004B9186  BF 01 00 00 00            MOV EDI,0x1
004B918B  85 C0                     TEST EAX,EAX
004B918D  0F 84 B8 00 00 00         JZ 0x004b924b
004B9193  8B 86 45 02 00 00         MOV EAX,dword ptr [ESI + 0x245]
004B9199  85 C0                     TEST EAX,EAX
004B919B  0F 85 AA 00 00 00         JNZ 0x004b924b
004B91A1  83 BE 49 02 00 00 02      CMP dword ptr [ESI + 0x249],0x2
004B91A8  0F 85 9D 00 00 00         JNZ 0x004b924b
004B91AE  8B 8E 35 02 00 00         MOV ECX,dword ptr [ESI + 0x235]
004B91B4  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004B91B9  8B 9E 85 02 00 00         MOV EBX,dword ptr [ESI + 0x285]
004B91BF  8B 14 8D 40 20 79 00      MOV EDX,dword ptr [ECX*0x4 + 0x792040]
004B91C6  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
004B91CC  03 D3                     ADD EDX,EBX
004B91CE  3B C2                     CMP EAX,EDX
004B91D0  0F 82 18 01 00 00         JC 0x004b92ee
004B91D6  8B 8E 59 02 00 00         MOV ECX,dword ptr [ESI + 0x259]
004B91DC  89 86 85 02 00 00         MOV dword ptr [ESI + 0x285],EAX
004B91E2  B8 89 88 88 88            MOV EAX,0x88888889
004B91E7  F7 E9                     IMUL ECX
004B91E9  03 D1                     ADD EDX,ECX
004B91EB  C1 FA 03                  SAR EDX,0x3
004B91EE  8B C2                     MOV EAX,EDX
004B91F0  C1 E8 1F                  SHR EAX,0x1f
004B91F3  03 D0                     ADD EDX,EAX
004B91F5  8D 0C 52                  LEA ECX,[EDX + EDX*0x2]
004B91F8  C1 E1 05                  SHL ECX,0x5
004B91FB  8B 81 C8 E8 7B 00         MOV EAX,dword ptr [ECX + 0x7be8c8]
004B9201  85 C0                     TEST EAX,EAX
004B9203  74 5C                     JZ 0x004b9261
004B9205  33 C9                     XOR ECX,ECX
004B9207  85 C0                     TEST EAX,EAX
004B9209  0F 9E C1                  SETLE CL
004B920C  49                        DEC ECX
004B920D  83 E1 02                  AND ECX,0x2
004B9210  49                        DEC ECX
004B9211  8B C1                     MOV EAX,ECX
004B9213  03 C2                     ADD EAX,EDX
004B9215  83 F8 17                  CMP EAX,0x17
004B9218  7E 15                     JLE 0x004b922f
004B921A  33 C0                     XOR EAX,EAX
004B921C  8B CE                     MOV ECX,ESI
004B921E  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004B9221  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004B9224  52                        PUSH EDX
004B9225  E8 A6 A8 F4 FF            CALL 0x00403ad0
004B922A  E9 BF 00 00 00            JMP 0x004b92ee
LAB_004b922f:
004B922F  85 C0                     TEST EAX,EAX
004B9231  7D 05                     JGE 0x004b9238
004B9233  B8 17 00 00 00            MOV EAX,0x17
LAB_004b9238:
004B9238  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004B923B  8B CE                     MOV ECX,ESI
004B923D  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004B9240  52                        PUSH EDX
004B9241  E8 8A A8 F4 FF            CALL 0x00403ad0
004B9246  E9 A3 00 00 00            JMP 0x004b92ee
LAB_004b924b:
004B924B  39 9E 45 02 00 00         CMP dword ptr [ESI + 0x245],EBX
004B9251  75 16                     JNZ 0x004b9269
004B9253  8B 86 DC 03 00 00         MOV EAX,dword ptr [ESI + 0x3dc]
004B9259  85 C0                     TEST EAX,EAX
004B925B  0F 85 8D 00 00 00         JNZ 0x004b92ee
LAB_004b9261:
004B9261  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004B9264  E9 85 00 00 00            JMP 0x004b92ee
LAB_004b9269:
004B9269  6A 0E                     PUSH 0xe
004B926B  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004B9271  E8 39 B0 F4 FF            CALL 0x004042af
004B9276  8B 8E F5 01 00 00         MOV ECX,dword ptr [ESI + 0x1f5]
004B927C  3B 81 0C 02 00 00         CMP EAX,dword ptr [ECX + 0x20c]
004B9282  75 4F                     JNZ 0x004b92d3
004B9284  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004B928A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004B928D  83 F8 65                  CMP EAX,0x65
004B9290  75 41                     JNZ 0x004b92d3
004B9292  8B 86 08 04 00 00         MOV EAX,dword ptr [ESI + 0x408]
004B9298  85 C0                     TEST EAX,EAX
004B929A  74 37                     JZ 0x004b92d3
004B929C  8B 86 0C 04 00 00         MOV EAX,dword ptr [ESI + 0x40c]
004B92A2  85 C0                     TEST EAX,EAX
004B92A4  74 2D                     JZ 0x004b92d3
004B92A6  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004B92AC  8D 55 F8                  LEA EDX,[EBP + -0x8]
004B92AF  52                        PUSH EDX
004B92B0  50                        PUSH EAX
004B92B1  E8 1A D0 22 00            CALL 0x006e62d0
004B92B6  85 C0                     TEST EAX,EAX
004B92B8  75 19                     JNZ 0x004b92d3
004B92BA  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004B92BD  E8 28 84 F4 FF            CALL 0x004016ea
004B92C2  8B 06                     MOV EAX,dword ptr [ESI]
004B92C4  68 D9 03 00 00            PUSH 0x3d9
004B92C9  6A 03                     PUSH 0x3
004B92CB  8B CE                     MOV ECX,ESI
004B92CD  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
LAB_004b92d3:
004B92D3  8B 8E 35 02 00 00         MOV ECX,dword ptr [ESI + 0x235]
004B92D9  8B 04 8D 10 1A 79 00      MOV EAX,dword ptr [ECX*0x4 + 0x791a10]
004B92E0  85 C0                     TEST EAX,EAX
004B92E2  74 0A                     JZ 0x004b92ee
004B92E4  8B CE                     MOV ECX,ESI
004B92E6  E8 8A CB F4 FF            CALL 0x00405e75
004B92EB  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_004b92ee:
004B92EE  8D 9E D5 01 00 00         LEA EBX,[ESI + 0x1d5]
004B92F4  6A 0E                     PUSH 0xe
004B92F6  8B CB                     MOV ECX,EBX
004B92F8  E8 AF 8F F4 FF            CALL 0x004022ac
004B92FD  6A 0D                     PUSH 0xd
004B92FF  8B CB                     MOV ECX,EBX
004B9301  8B F8                     MOV EDI,EAX
004B9303  E8 A4 8F F4 FF            CALL 0x004022ac
004B9308  3B F8                     CMP EDI,EAX
004B930A  7E 7B                     JLE 0x004b9387
004B930C  6A 0D                     PUSH 0xd
004B930E  8B CB                     MOV ECX,EBX
004B9310  E8 97 8F F4 FF            CALL 0x004022ac
004B9315  83 F8 01                  CMP EAX,0x1
004B9318  7E 6D                     JLE 0x004b9387
004B931A  6A 0D                     PUSH 0xd
004B931C  8B CE                     MOV ECX,ESI
004B931E  E8 6C B1 F4 FF            CALL 0x0040448f
004B9323  83 F8 02                  CMP EAX,0x2
004B9326  75 5F                     JNZ 0x004b9387
004B9328  8B 8E F5 01 00 00         MOV ECX,dword ptr [ESI + 0x1f5]
004B932E  8B 81 08 02 00 00         MOV EAX,dword ptr [ECX + 0x208]
004B9334  8B 91 0C 02 00 00         MOV EDX,dword ptr [ECX + 0x20c]
004B933A  3B D0                     CMP EDX,EAX
004B933C  7E 0A                     JLE 0x004b9348
004B933E  8B B9 10 02 00 00         MOV EDI,dword ptr [ECX + 0x210]
004B9344  2B F8                     SUB EDI,EAX
004B9346  EB 08                     JMP 0x004b9350
LAB_004b9348:
004B9348  2B 81 10 02 00 00         SUB EAX,dword ptr [ECX + 0x210]
004B934E  8B F8                     MOV EDI,EAX
LAB_004b9350:
004B9350  6A 0E                     PUSH 0xe
004B9352  8B CB                     MOV ECX,EBX
004B9354  E8 53 8F F4 FF            CALL 0x004022ac
004B9359  8B D0                     MOV EDX,EAX
004B935B  6A 0D                     PUSH 0xd
004B935D  8B CB                     MOV ECX,EBX
004B935F  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
004B9362  E8 45 8F F4 FF            CALL 0x004022ac
004B9367  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004B936A  2B D0                     SUB EDX,EAX
004B936C  4A                        DEC EDX
004B936D  3B FA                     CMP EDI,EDX
004B936F  7C 16                     JL 0x004b9387
004B9371  8B 86 F1 01 00 00         MOV EAX,dword ptr [ESI + 0x1f1]
004B9377  F6 C4 20                  TEST AH,0x20
004B937A  75 0B                     JNZ 0x004b9387
004B937C  6A 00                     PUSH 0x0
004B937E  6A 0D                     PUSH 0xd
004B9380  8B CE                     MOV ECX,ESI
004B9382  E8 C4 A4 F4 FF            CALL 0x0040384b
LAB_004b9387:
004B9387  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004B938A  85 C0                     TEST EAX,EAX
004B938C  74 19                     JZ 0x004b93a7
004B938E  8B CE                     MOV ECX,ESI
004B9390  E8 8B BB F4 FF            CALL 0x00404f20
004B9395  3B 86 45 02 00 00         CMP EAX,dword ptr [ESI + 0x245]
004B939B  74 0A                     JZ 0x004b93a7
004B939D  6A 01                     PUSH 0x1
004B939F  50                        PUSH EAX
004B93A0  8B CE                     MOV ECX,ESI
004B93A2  E8 03 7D F4 FF            CALL 0x004010aa
LAB_004b93a7:
004B93A7  8B 86 DF 05 00 00         MOV EAX,dword ptr [ESI + 0x5df]
004B93AD  85 C0                     TEST EAX,EAX
004B93AF  74 59                     JZ 0x004b940a
004B93B1  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004B93B6  8B 8E CC 04 00 00         MOV ECX,dword ptr [ESI + 0x4cc]
004B93BC  83 C1 02                  ADD ECX,0x2
004B93BF  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
004B93C5  3B C1                     CMP EAX,ECX
004B93C7  72 41                     JC 0x004b940a
004B93C9  89 86 CC 04 00 00         MOV dword ptr [ESI + 0x4cc],EAX
004B93CF  8B 86 C8 04 00 00         MOV EAX,dword ptr [ESI + 0x4c8]
004B93D5  48                        DEC EAX
004B93D6  89 86 C8 04 00 00         MOV dword ptr [ESI + 0x4c8],EAX
004B93DC  8B C8                     MOV ECX,EAX
004B93DE  74 11                     JZ 0x004b93f1
004B93E0  A1 24 67 80 00            MOV EAX,[0x00806724]
004B93E5  0F BF 50 2C               MOVSX EDX,word ptr [EAX + 0x2c]
004B93E9  8B 44 88 30               MOV EAX,dword ptr [EAX + ECX*0x4 + 0x30]
004B93ED  52                        PUSH EDX
004B93EE  50                        PUSH EAX
004B93EF  EB 0E                     JMP 0x004b93ff
LAB_004b93f1:
004B93F1  6A 00                     PUSH 0x0
004B93F3  C7 86 DF 05 00 00 00 00 00 00  MOV dword ptr [ESI + 0x5df],0x0
004B93FD  6A 00                     PUSH 0x0
LAB_004b93ff:
004B93FF  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004B9405  E8 63 7D F4 FF            CALL 0x0040116d
LAB_004b940a:
004B940A  8B 16                     MOV EDX,dword ptr [ESI]
004B940C  8B CE                     MOV ECX,ESI
004B940E  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
004B9414  5F                        POP EDI
004B9415  5E                        POP ESI
004B9416  33 C0                     XOR EAX,EAX
004B9418  5B                        POP EBX
004B9419  8B E5                     MOV ESP,EBP
004B941B  5D                        POP EBP
004B941C  C3                        RET
LAB_004b941d:
004B941D  83 BE DF 05 00 00 05      CMP dword ptr [ESI + 0x5df],0x5
004B9424  0F 85 89 00 00 00         JNZ 0x004b94b3
004B942A  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004B942F  8B 8E CC 04 00 00         MOV ECX,dword ptr [ESI + 0x4cc]
004B9435  83 C1 02                  ADD ECX,0x2
004B9438  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
004B943E  3B C1                     CMP EAX,ECX
004B9440  0F 82 11 02 00 00         JC 0x004b9657
004B9446  89 86 CC 04 00 00         MOV dword ptr [ESI + 0x4cc],EAX
004B944C  8B 86 C8 04 00 00         MOV EAX,dword ptr [ESI + 0x4c8]
004B9452  40                        INC EAX
004B9453  89 86 C8 04 00 00         MOV dword ptr [ESI + 0x4c8],EAX
004B9459  8B 0D 24 67 80 00         MOV ECX,dword ptr [0x00806724]
004B945F  0F BF 51 23               MOVSX EDX,word ptr [ECX + 0x23]
004B9463  4A                        DEC EDX
004B9464  3B C2                     CMP EAX,EDX
004B9466  7D 1E                     JGE 0x004b9486
004B9468  0F BF 51 2C               MOVSX EDX,word ptr [ECX + 0x2c]
004B946C  8B 44 81 30               MOV EAX,dword ptr [ECX + EAX*0x4 + 0x30]
004B9470  52                        PUSH EDX
004B9471  50                        PUSH EAX
004B9472  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004B9478  E8 F0 7C F4 FF            CALL 0x0040116d
004B947D  5F                        POP EDI
004B947E  5E                        POP ESI
004B947F  33 C0                     XOR EAX,EAX
004B9481  5B                        POP EBX
004B9482  8B E5                     MOV ESP,EBP
004B9484  5D                        POP EBP
004B9485  C3                        RET
LAB_004b9486:
004B9486  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
004B9489  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
004B948C  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
004B948F  8D 4D D8                  LEA ECX,[EBP + -0x28]
004B9492  51                        PUSH ECX
004B9493  8B CE                     MOV ECX,ESI
004B9495  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
004B9498  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
004B949B  C7 45 E8 0A 00 00 00      MOV dword ptr [EBP + -0x18],0xa
004B94A2  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
004B94A5  E8 F6 CB 22 00            CALL 0x006e60a0
004B94AA  5F                        POP EDI
004B94AB  5E                        POP ESI
004B94AC  33 C0                     XOR EAX,EAX
004B94AE  5B                        POP EBX
004B94AF  8B E5                     MOV ESP,EBP
004B94B1  5D                        POP EBP
004B94B2  C3                        RET
LAB_004b94b3:
004B94B3  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
004B94B9  BB 04 00 00 00            MOV EBX,0x4
004B94BE  53                        PUSH EBX
004B94BF  8B CF                     MOV ECX,EDI
004B94C1  E8 E9 AD F4 FF            CALL 0x004042af
004B94C6  8B 96 F5 01 00 00         MOV EDX,dword ptr [ESI + 0x1f5]
004B94CC  3B 82 A4 00 00 00         CMP EAX,dword ptr [EDX + 0xa4]
004B94D2  7C 48                     JL 0x004b951c
004B94D4  6A 05                     PUSH 0x5
004B94D6  8B CF                     MOV ECX,EDI
004B94D8  E8 D2 AD F4 FF            CALL 0x004042af
004B94DD  8B 8E F5 01 00 00         MOV ECX,dword ptr [ESI + 0x1f5]
004B94E3  3B 81 C8 00 00 00         CMP EAX,dword ptr [ECX + 0xc8]
004B94E9  7C 31                     JL 0x004b951c
004B94EB  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
004B94EE  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
004B94F1  8B 42 14                  MOV EAX,dword ptr [EDX + 0x14]
004B94F4  8D 55 D8                  LEA EDX,[EBP + -0x28]
004B94F7  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
004B94FA  52                        PUSH EDX
004B94FB  8B CE                     MOV ECX,ESI
004B94FD  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
004B9500  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
004B9507  C7 45 E8 0A 00 00 00      MOV dword ptr [EBP + -0x18],0xa
004B950E  E8 8D CB 22 00            CALL 0x006e60a0
004B9513  5F                        POP EDI
004B9514  5E                        POP ESI
004B9515  33 C0                     XOR EAX,EAX
004B9517  5B                        POP EBX
004B9518  8B E5                     MOV ESP,EBP
004B951A  5D                        POP EBP
004B951B  C3                        RET
LAB_004b951c:
004B951C  8B 06                     MOV EAX,dword ptr [ESI]
004B951E  8B CE                     MOV ECX,ESI
004B9520  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
004B9526  53                        PUSH EBX
004B9527  8B CF                     MOV ECX,EDI
004B9529  E8 81 AD F4 FF            CALL 0x004042af
004B952E  8B 8E 35 02 00 00         MOV ECX,dword ptr [ESI + 0x235]
004B9534  8B 0C 8D 5C 12 79 00      MOV ECX,dword ptr [ECX*0x4 + 0x79125c]
004B953B  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
004B953E  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
004B9541  3B 04 55 52 DF 7C 00      CMP EAX,dword ptr [EDX*0x2 + 0x7cdf52]
004B9548  0F 85 A6 00 00 00         JNZ 0x004b95f4
004B954E  6A 0E                     PUSH 0xe
004B9550  8B CF                     MOV ECX,EDI
004B9552  E8 0D AD F4 FF            CALL 0x00404264
004B9557  6A 0D                     PUSH 0xd
004B9559  8B CF                     MOV ECX,EDI
004B955B  E8 04 AD F4 FF            CALL 0x00404264
004B9560  6A 0C                     PUSH 0xc
004B9562  8B CF                     MOV ECX,EDI
004B9564  E8 FB AC F4 FF            CALL 0x00404264
004B9569  6A 09                     PUSH 0x9
004B956B  8B CF                     MOV ECX,EDI
004B956D  E8 F2 AC F4 FF            CALL 0x00404264
004B9572  6A 08                     PUSH 0x8
004B9574  8B CF                     MOV ECX,EDI
004B9576  E8 E9 AC F4 FF            CALL 0x00404264
004B957B  6A 07                     PUSH 0x7
004B957D  8B CF                     MOV ECX,EDI
004B957F  E8 E0 AC F4 FF            CALL 0x00404264
004B9584  6A 10                     PUSH 0x10
004B9586  8B CF                     MOV ECX,EDI
004B9588  E8 D7 AC F4 FF            CALL 0x00404264
004B958D  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004B9593  8B 0C 85 10 1A 79 00      MOV ECX,dword ptr [EAX*0x4 + 0x791a10]
004B959A  85 C9                     TEST ECX,ECX
004B959C  74 07                     JZ 0x004b95a5
004B959E  8B CE                     MOV ECX,ESI
004B95A0  E8 71 A0 F4 FF            CALL 0x00403616
LAB_004b95a5:
004B95A5  8B 86 4D 02 00 00         MOV EAX,dword ptr [ESI + 0x24d]
004B95AB  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004B95AE  33 C9                     XOR ECX,ECX
004B95B0  3B C3                     CMP EAX,EBX
004B95B2  0F 94 C1                  SETZ CL
004B95B5  51                        PUSH ECX
004B95B6  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004B95BC  52                        PUSH EDX
004B95BD  E8 F5 B3 F4 FF            CALL 0x004049b7
004B95C2  0F BF 4E 45               MOVSX ECX,word ptr [ESI + 0x45]
004B95C6  0F BF 56 43               MOVSX EDX,word ptr [ESI + 0x43]
004B95CA  25 FF 00 00 00            AND EAX,0xff
004B95CF  50                        PUSH EAX
004B95D0  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004B95D6  6A FF                     PUSH -0x1
004B95D8  6A FF                     PUSH -0x1
004B95DA  56                        PUSH ESI
004B95DB  50                        PUSH EAX
004B95DC  0F BF 46 41               MOVSX EAX,word ptr [ESI + 0x41]
004B95E0  51                        PUSH ECX
004B95E1  52                        PUSH EDX
004B95E2  50                        PUSH EAX
004B95E3  E8 97 B4 F4 FF            CALL 0x00404a7f
004B95E8  83 C4 24                  ADD ESP,0x24
004B95EB  33 C0                     XOR EAX,EAX
004B95ED  5F                        POP EDI
004B95EE  5E                        POP ESI
004B95EF  5B                        POP EBX
004B95F0  8B E5                     MOV ESP,EBP
004B95F2  5D                        POP EBP
004B95F3  C3                        RET
LAB_004b95f4:
004B95F4  8B 8E 35 02 00 00         MOV ECX,dword ptr [ESI + 0x235]
004B95FA  53                        PUSH EBX
004B95FB  8B 04 8D 5C 12 79 00      MOV EAX,dword ptr [ECX*0x4 + 0x79125c]
004B9602  8B CF                     MOV ECX,EDI
004B9604  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004B9607  8D 34 80                  LEA ESI,[EAX + EAX*0x4]
004B960A  D1 E6                     SHL ESI,0x1
004B960C  E8 9E AC F4 FF            CALL 0x004042af
004B9611  3B 86 5A DF 7C 00         CMP EAX,dword ptr [ESI + 0x7cdf5a]
004B9617  75 3E                     JNZ 0x004b9657
004B9619  A1 64 67 80 00            MOV EAX,[0x00806764]
004B961E  8D 96 3A DF 7C 00         LEA EDX,[ESI + 0x7cdf3a]
004B9624  6A 1D                     PUSH 0x1d
004B9626  52                        PUSH EDX
004B9627  50                        PUSH EAX
004B9628  6A 05                     PUSH 0x5
004B962A  8B CF                     MOV ECX,EDI
004B962C  E8 52 AB F4 FF            CALL 0x00404183
004B9631  85 C0                     TEST EAX,EAX
004B9633  74 0C                     JZ 0x004b9641
004B9635  5F                        POP EDI
004B9636  5E                        POP ESI
004B9637  B8 FF FF 00 00            MOV EAX,0xffff
004B963C  5B                        POP EBX
004B963D  8B E5                     MOV ESP,EBP
004B963F  5D                        POP EBP
004B9640  C3                        RET
LAB_004b9641:
004B9641  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004B9647  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004B964D  8B CF                     MOV ECX,EDI
004B964F  52                        PUSH EDX
004B9650  6A 05                     PUSH 0x5
004B9652  E8 E9 BB F4 FF            CALL 0x00405240
LAB_004b9657:
004B9657  5F                        POP EDI
004B9658  5E                        POP ESI
004B9659  33 C0                     XOR EAX,EAX
004B965B  5B                        POP EBX
004B965C  8B E5                     MOV ESP,EBP
004B965E  5D                        POP EBP
004B965F  C3                        RET
