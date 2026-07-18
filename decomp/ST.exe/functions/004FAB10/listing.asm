FUN_004fab10:
004FAB10  55                        PUSH EBP
004FAB11  8B EC                     MOV EBP,ESP
004FAB13  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004FAB16  25 FF 00 00 00            AND EAX,0xff
004FAB1B  48                        DEC EAX
004FAB1C  83 F8 11                  CMP EAX,0x11
004FAB1F  0F 87 30 01 00 00         JA 0x004fac55
switchD_004fab25::switchD:
004FAB25  FF 24 85 5C AC 4F 00      JMP dword ptr [EAX*0x4 + 0x4fac5c]
switchD_004fab25::caseD_1:
004FAB2C  33 C0                     XOR EAX,EAX
004FAB2E  66 83 B9 3F 02 00 00 01   CMP word ptr [ECX + 0x23f],0x1
004FAB36  0F 94 C0                  SETZ AL
004FAB39  5D                        POP EBP
004FAB3A  C2 04 00                  RET 0x4
switchD_004fab25::caseD_6:
004FAB3D  A1 E8 16 80 00            MOV EAX,[0x008016e8]
004FAB42  85 C0                     TEST EAX,EAX
004FAB44  74 13                     JZ 0x004fab59
004FAB46  33 C9                     XOR ECX,ECX
004FAB48  66 83 B8 72 01 00 00 02   CMP word ptr [EAX + 0x172],0x2
004FAB50  0F 95 C1                  SETNZ CL
004FAB53  8B C1                     MOV EAX,ECX
004FAB55  5D                        POP EBP
004FAB56  C2 04 00                  RET 0x4
switchD_004fab25::caseD_7:
004FAB59  A1 7C 16 80 00            MOV EAX,[0x0080167c]
004FAB5E  85 C0                     TEST EAX,EAX
004FAB60  74 13                     JZ 0x004fab75
004FAB62  33 D2                     XOR EDX,EDX
004FAB64  66 83 B8 72 01 00 00 02   CMP word ptr [EAX + 0x172],0x2
004FAB6C  0F 95 C2                  SETNZ DL
004FAB6F  8B C2                     MOV EAX,EDX
004FAB71  5D                        POP EBP
004FAB72  C2 04 00                  RET 0x4
switchD_004fab25::caseD_8:
004FAB75  A1 84 16 80 00            MOV EAX,[0x00801684]
004FAB7A  85 C0                     TEST EAX,EAX
004FAB7C  74 13                     JZ 0x004fab91
004FAB7E  33 C9                     XOR ECX,ECX
004FAB80  66 83 B8 72 01 00 00 02   CMP word ptr [EAX + 0x172],0x2
004FAB88  0F 95 C1                  SETNZ CL
004FAB8B  8B C1                     MOV EAX,ECX
004FAB8D  5D                        POP EBP
004FAB8E  C2 04 00                  RET 0x4
switchD_004fab25::caseD_9:
004FAB91  A1 98 16 80 00            MOV EAX,[0x00801698]
004FAB96  85 C0                     TEST EAX,EAX
004FAB98  74 13                     JZ 0x004fabad
004FAB9A  33 D2                     XOR EDX,EDX
004FAB9C  66 83 B8 72 01 00 00 02   CMP word ptr [EAX + 0x172],0x2
004FABA4  0F 95 C2                  SETNZ DL
004FABA7  8B C2                     MOV EAX,EDX
004FABA9  5D                        POP EBP
004FABAA  C2 04 00                  RET 0x4
switchD_004fab25::caseD_a:
004FABAD  A1 44 2A 80 00            MOV EAX,[0x00802a44]
004FABB2  85 C0                     TEST EAX,EAX
004FABB4  74 13                     JZ 0x004fabc9
004FABB6  33 C9                     XOR ECX,ECX
004FABB8  66 83 B8 72 01 00 00 02   CMP word ptr [EAX + 0x172],0x2
004FABC0  0F 95 C1                  SETNZ CL
004FABC3  8B C1                     MOV EAX,ECX
004FABC5  5D                        POP EBP
004FABC6  C2 04 00                  RET 0x4
switchD_004fab25::caseD_b:
004FABC9  A1 78 16 80 00            MOV EAX,[0x00801678]
004FABCE  85 C0                     TEST EAX,EAX
004FABD0  74 13                     JZ 0x004fabe5
004FABD2  33 D2                     XOR EDX,EDX
004FABD4  66 83 B8 72 01 00 00 02   CMP word ptr [EAX + 0x172],0x2
004FABDC  0F 95 C2                  SETNZ DL
004FABDF  8B C2                     MOV EAX,EDX
004FABE1  5D                        POP EBP
004FABE2  C2 04 00                  RET 0x4
switchD_004fab25::caseD_c:
004FABE5  A1 80 16 80 00            MOV EAX,[0x00801680]
004FABEA  85 C0                     TEST EAX,EAX
004FABEC  74 13                     JZ 0x004fac01
004FABEE  33 C9                     XOR ECX,ECX
004FABF0  66 83 B8 72 01 00 00 02   CMP word ptr [EAX + 0x172],0x2
004FABF8  0F 95 C1                  SETNZ CL
004FABFB  8B C1                     MOV EAX,ECX
004FABFD  5D                        POP EBP
004FABFE  C2 04 00                  RET 0x4
switchD_004fab25::caseD_10:
004FAC01  A1 48 2A 80 00            MOV EAX,[0x00802a48]
004FAC06  85 C0                     TEST EAX,EAX
004FAC08  74 13                     JZ 0x004fac1d
004FAC0A  33 D2                     XOR EDX,EDX
004FAC0C  66 83 B8 72 01 00 00 02   CMP word ptr [EAX + 0x172],0x2
004FAC14  0F 95 C2                  SETNZ DL
004FAC17  8B C2                     MOV EAX,EDX
004FAC19  5D                        POP EBP
004FAC1A  C2 04 00                  RET 0x4
switchD_004fab25::caseD_11:
004FAC1D  A1 8C 16 80 00            MOV EAX,[0x0080168c]
004FAC22  85 C0                     TEST EAX,EAX
004FAC24  74 13                     JZ 0x004fac39
004FAC26  33 C9                     XOR ECX,ECX
004FAC28  66 83 B8 72 01 00 00 02   CMP word ptr [EAX + 0x172],0x2
004FAC30  0F 95 C1                  SETNZ CL
004FAC33  8B C1                     MOV EAX,ECX
004FAC35  5D                        POP EBP
004FAC36  C2 04 00                  RET 0x4
switchD_004fab25::caseD_12:
004FAC39  A1 EC 16 80 00            MOV EAX,[0x008016ec]
004FAC3E  85 C0                     TEST EAX,EAX
004FAC40  74 13                     JZ 0x004fac55
004FAC42  33 D2                     XOR EDX,EDX
004FAC44  66 83 B8 72 01 00 00 02   CMP word ptr [EAX + 0x172],0x2
004FAC4C  0F 95 C2                  SETNZ DL
004FAC4F  8B C2                     MOV EAX,EDX
004FAC51  5D                        POP EBP
004FAC52  C2 04 00                  RET 0x4
switchD_004fab25::caseD_d:
004FAC55  33 C0                     XOR EAX,EAX
004FAC57  5D                        POP EBP
004FAC58  C2 04 00                  RET 0x4
