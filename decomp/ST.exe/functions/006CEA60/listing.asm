FUN_006cea60:
006CEA60  55                        PUSH EBP
006CEA61  8B EC                     MOV EBP,ESP
006CEA63  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006CEA66  53                        PUSH EBX
006CEA67  56                        PUSH ESI
006CEA68  57                        PUSH EDI
006CEA69  85 C0                     TEST EAX,EAX
006CEA6B  0F 8E 5E 01 00 00         JLE 0x006cebcf
006CEA71  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CEA74  85 C9                     TEST ECX,ECX
006CEA76  0F 8E 53 01 00 00         JLE 0x006cebcf
006CEA7C  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006CEA7F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CEA82  2B F0                     SUB ESI,EAX
006CEA84  2B D0                     SUB EDX,EAX
006CEA86  83 F8 0F                  CMP EAX,0xf
006CEA89  89 75 14                  MOV dword ptr [EBP + 0x14],ESI
006CEA8C  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
006CEA8F  0F 8C 1C 01 00 00         JL 0x006cebb1
006CEA95  F6 05 E0 8D 85 00 01      TEST byte ptr [0x00858de0],0x1
006CEA9C  0F 84 C7 00 00 00         JZ 0x006ceb69
006CEAA2  3D BC 02 00 00            CMP EAX,0x2bc
006CEAA7  7C 69                     JL 0x006ceb12
006CEAA9  83 3D 24 8E 85 00 06      CMP dword ptr [0x00858e24],0x6
006CEAB0  7C 60                     JL 0x006ceb12
006CEAB2  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006CEAB5  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006CEAB8  33 C2                     XOR EAX,EDX
006CEABA  A8 07                     TEST AL,0x7
006CEABC  75 54                     JNZ 0x006ceb12
006CEABE  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CEAC1  8B D6                     MOV EDX,ESI
006CEAC3  33 CA                     XOR ECX,EDX
006CEAC5  F6 C1 07                  TEST CL,0x7
006CEAC8  75 48                     JNZ 0x006ceb12
006CEACA  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006CEACD  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006CEAD0  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
LAB_006cead3:
006CEAD3  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CEAD6  F7 C7 07 00 00 00         TEST EDI,0x7
006CEADC  74 0F                     JZ 0x006ceaed
LAB_006ceade:
006CEADE  8A 06                     MOV AL,byte ptr [ESI]
006CEAE0  46                        INC ESI
006CEAE1  88 07                     MOV byte ptr [EDI],AL
006CEAE3  47                        INC EDI
006CEAE4  49                        DEC ECX
006CEAE5  F7 C7 07 00 00 00         TEST EDI,0x7
006CEAEB  75 F1                     JNZ 0x006ceade
LAB_006ceaed:
006CEAED  8B D9                     MOV EBX,ECX
006CEAEF  C1 E9 02                  SHR ECX,0x2
006CEAF2  F3 A5                     MOVSD.REP ES:EDI,ESI
006CEAF4  83 E3 03                  AND EBX,0x3
006CEAF7  74 09                     JZ 0x006ceb02
LAB_006ceaf9:
006CEAF9  8A 06                     MOV AL,byte ptr [ESI]
006CEAFB  46                        INC ESI
006CEAFC  88 07                     MOV byte ptr [EDI],AL
006CEAFE  47                        INC EDI
006CEAFF  4B                        DEC EBX
006CEB00  7F F7                     JG 0x006ceaf9
LAB_006ceb02:
006CEB02  03 75 14                  ADD ESI,dword ptr [EBP + 0x14]
006CEB05  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
006CEB08  4A                        DEC EDX
006CEB09  7F C8                     JG 0x006cead3
006CEB0B  5F                        POP EDI
006CEB0C  5E                        POP ESI
006CEB0D  5B                        POP EBX
006CEB0E  5D                        POP EBP
006CEB0F  C2 18 00                  RET 0x18
LAB_006ceb12:
006CEB12  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006CEB15  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006CEB18  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
LAB_006ceb1b:
006CEB1B  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CEB1E  F7 C7 07 00 00 00         TEST EDI,0x7
006CEB24  74 0F                     JZ 0x006ceb35
LAB_006ceb26:
006CEB26  8A 06                     MOV AL,byte ptr [ESI]
006CEB28  46                        INC ESI
006CEB29  88 07                     MOV byte ptr [EDI],AL
006CEB2B  47                        INC EDI
006CEB2C  49                        DEC ECX
006CEB2D  F7 C7 07 00 00 00         TEST EDI,0x7
006CEB33  75 F1                     JNZ 0x006ceb26
LAB_006ceb35:
006CEB35  8B D9                     MOV EBX,ECX
006CEB37  C1 E9 03                  SHR ECX,0x3
LAB_006ceb3a:
006CEB3A  0F 6F 0E                  MOVQ MM1,qword ptr [ESI]
006CEB3D  83 C6 08                  ADD ESI,0x8
006CEB40  0F 7F 0F                  MOVQ qword ptr [EDI],MM1
006CEB43  83 C7 08                  ADD EDI,0x8
006CEB46  49                        DEC ECX
006CEB47  7F F1                     JG 0x006ceb3a
006CEB49  83 E3 07                  AND EBX,0x7
006CEB4C  74 09                     JZ 0x006ceb57
LAB_006ceb4e:
006CEB4E  8A 06                     MOV AL,byte ptr [ESI]
006CEB50  46                        INC ESI
006CEB51  88 07                     MOV byte ptr [EDI],AL
006CEB53  47                        INC EDI
006CEB54  4B                        DEC EBX
006CEB55  7F F7                     JG 0x006ceb4e
LAB_006ceb57:
006CEB57  03 75 14                  ADD ESI,dword ptr [EBP + 0x14]
006CEB5A  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
006CEB5D  4A                        DEC EDX
006CEB5E  7F BB                     JG 0x006ceb1b
006CEB60  0F 77                     EMMS
006CEB62  5F                        POP EDI
006CEB63  5E                        POP ESI
006CEB64  5B                        POP EBX
006CEB65  5D                        POP EBP
006CEB66  C2 18 00                  RET 0x18
LAB_006ceb69:
006CEB69  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006CEB6C  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006CEB6F  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
LAB_006ceb72:
006CEB72  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CEB75  F7 C7 03 00 00 00         TEST EDI,0x3
006CEB7B  74 0F                     JZ 0x006ceb8c
LAB_006ceb7d:
006CEB7D  8A 06                     MOV AL,byte ptr [ESI]
006CEB7F  46                        INC ESI
006CEB80  88 07                     MOV byte ptr [EDI],AL
006CEB82  47                        INC EDI
006CEB83  49                        DEC ECX
006CEB84  F7 C7 03 00 00 00         TEST EDI,0x3
006CEB8A  75 F1                     JNZ 0x006ceb7d
LAB_006ceb8c:
006CEB8C  8B D9                     MOV EBX,ECX
006CEB8E  C1 E9 02                  SHR ECX,0x2
006CEB91  F3 A5                     MOVSD.REP ES:EDI,ESI
006CEB93  83 E3 03                  AND EBX,0x3
006CEB96  74 09                     JZ 0x006ceba1
LAB_006ceb98:
006CEB98  8A 06                     MOV AL,byte ptr [ESI]
006CEB9A  46                        INC ESI
006CEB9B  88 07                     MOV byte ptr [EDI],AL
006CEB9D  47                        INC EDI
006CEB9E  4B                        DEC EBX
006CEB9F  7F F7                     JG 0x006ceb98
LAB_006ceba1:
006CEBA1  03 75 14                  ADD ESI,dword ptr [EBP + 0x14]
006CEBA4  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
006CEBA7  4A                        DEC EDX
006CEBA8  7F C8                     JG 0x006ceb72
006CEBAA  5F                        POP EDI
006CEBAB  5E                        POP ESI
006CEBAC  5B                        POP EBX
006CEBAD  5D                        POP EBP
006CEBAE  C2 18 00                  RET 0x18
LAB_006cebb1:
006CEBB1  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006CEBB4  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006CEBB7  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
LAB_006cebba:
006CEBBA  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
LAB_006cebbd:
006CEBBD  8A 06                     MOV AL,byte ptr [ESI]
006CEBBF  46                        INC ESI
006CEBC0  88 07                     MOV byte ptr [EDI],AL
006CEBC2  47                        INC EDI
006CEBC3  49                        DEC ECX
006CEBC4  7F F7                     JG 0x006cebbd
006CEBC6  03 75 14                  ADD ESI,dword ptr [EBP + 0x14]
006CEBC9  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
006CEBCC  4A                        DEC EDX
006CEBCD  7F EB                     JG 0x006cebba
LAB_006cebcf:
006CEBCF  5F                        POP EDI
006CEBD0  5E                        POP ESI
006CEBD1  5B                        POP EBX
006CEBD2  5D                        POP EBP
006CEBD3  C2 18 00                  RET 0x18
