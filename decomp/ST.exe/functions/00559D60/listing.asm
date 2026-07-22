SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00559D60::FUN_00559d60:
00559D60  55                        PUSH EBP
00559D61  8B EC                     MOV EBP,ESP
00559D63  51                        PUSH ECX
00559D64  8B 81 14 01 00 00         MOV EAX,dword ptr [ECX + 0x114]
00559D6A  53                        PUSH EBX
00559D6B  56                        PUSH ESI
00559D6C  57                        PUSH EDI
00559D6D  85 C0                     TEST EAX,EAX
00559D6F  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00559D72  0F 84 E1 00 00 00         JZ 0x00559e59
00559D78  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
00559D7B  85 F6                     TEST ESI,ESI
00559D7D  0F 8C D6 00 00 00         JL 0x00559e59
00559D83  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00559D86  83 F8 08                  CMP EAX,0x8
00559D89  0F 83 CA 00 00 00         JNC 0x00559e59
00559D8F  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00559D95  85 D2                     TEST EDX,EDX
00559D97  74 11                     JZ 0x00559daa
00559D99  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00559D9C  80 BC D2 E9 87 80 00 08   CMP byte ptr [EDX + EDX*0x8 + 0x8087e9],0x8
00559DA4  0F 83 AF 00 00 00         JNC 0x00559e59
LAB_00559daa:
00559DAA  8B 54 81 74               MOV EDX,dword ptr [ECX + EAX*0x4 + 0x74]
00559DAE  85 D2                     TEST EDX,EDX
00559DB0  0F 84 A3 00 00 00         JZ 0x00559e59
00559DB6  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00559DB9  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00559DBC  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00559DBF  52                        PUSH EDX
00559DC0  56                        PUSH ESI
00559DC1  50                        PUSH EAX
00559DC2  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00559DC5  50                        PUSH EAX
00559DC6  57                        PUSH EDI
00559DC7  53                        PUSH EBX
00559DC8  6A 03                     PUSH 0x3
00559DCA  E8 16 7E EA FF            CALL 0x00401be5
00559DCF  8D 4C 36 01               LEA ECX,[ESI + ESI*0x1 + 0x1]
00559DD3  2B DE                     SUB EBX,ESI
00559DD5  56                        PUSH ESI
00559DD6  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
00559DD9  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
00559DDC  2B FE                     SUB EDI,ESI
00559DDE  E8 DC 8A EA FF            CALL 0x004028bf
00559DE3  8B C8                     MOV ECX,EAX
00559DE5  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00559DE8  83 C4 04                  ADD ESP,0x4
00559DEB  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
00559DEE  85 C0                     TEST EAX,EAX
00559DF0  7E 67                     JLE 0x00559e59
00559DF2  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
00559DF5  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_00559df8:
00559DF8  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00559DFB  33 C0                     XOR EAX,EAX
LAB_00559dfd:
00559DFD  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00559E00  85 C9                     TEST ECX,ECX
00559E02  74 09                     JZ 0x00559e0d
00559E04  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00559E07  80 3C 02 00               CMP byte ptr [EDX + EAX*0x1],0x0
00559E0B  74 31                     JZ 0x00559e3e
LAB_00559e0d:
00559E0D  85 F6                     TEST ESI,ESI
00559E0F  7C 2D                     JL 0x00559e3e
00559E11  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00559E14  8B 4A 20                  MOV ECX,dword ptr [EDX + 0x20]
00559E17  3B F1                     CMP ESI,ECX
00559E19  7D 23                     JGE 0x00559e3e
00559E1B  85 FF                     TEST EDI,EDI
00559E1D  7C 1F                     JL 0x00559e3e
00559E1F  3B 7A 24                  CMP EDI,dword ptr [EDX + 0x24]
00559E22  7D 1A                     JGE 0x00559e3e
00559E24  8B DF                     MOV EBX,EDI
00559E26  0F AF D9                  IMUL EBX,ECX
00559E29  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00559E2C  03 5C 8A 74               ADD EBX,dword ptr [EDX + ECX*0x4 + 0x74]
00559E30  8A 0C 33                  MOV CL,byte ptr [EBX + ESI*0x1]
00559E33  84 C9                     TEST CL,CL
00559E35  8D 14 33                  LEA EDX,[EBX + ESI*0x1]
00559E38  76 04                     JBE 0x00559e3e
00559E3A  FE C9                     DEC CL
00559E3C  88 0A                     MOV byte ptr [EDX],CL
LAB_00559e3e:
00559E3E  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00559E41  40                        INC EAX
00559E42  46                        INC ESI
00559E43  3B C1                     CMP EAX,ECX
00559E45  7C B6                     JL 0x00559dfd
00559E47  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00559E4A  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00559E4D  03 D1                     ADD EDX,ECX
00559E4F  47                        INC EDI
00559E50  48                        DEC EAX
00559E51  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
00559E54  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
00559E57  75 9F                     JNZ 0x00559df8
LAB_00559e59:
00559E59  5F                        POP EDI
00559E5A  5E                        POP ESI
00559E5B  5B                        POP EBX
00559E5C  8B E5                     MOV ESP,EBP
00559E5E  5D                        POP EBP
00559E5F  C2 18 00                  RET 0x18
