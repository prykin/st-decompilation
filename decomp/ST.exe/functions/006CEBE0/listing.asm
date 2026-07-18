FUN_006cebe0:
006CEBE0  55                        PUSH EBP
006CEBE1  8B EC                     MOV EBP,ESP
006CEBE3  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006CEBE6  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006CEBE9  56                        PUSH ESI
006CEBEA  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006CEBED  2B F2                     SUB ESI,EDX
006CEBEF  2B CA                     SUB ECX,EDX
006CEBF1  85 D2                     TEST EDX,EDX
006CEBF3  89 75 0C                  MOV dword ptr [EBP + 0xc],ESI
006CEBF6  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
006CEBF9  7E 3D                     JLE 0x006cec38
006CEBFB  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006CEBFE  85 C0                     TEST EAX,EAX
006CEC00  7E 36                     JLE 0x006cec38
006CEC02  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006CEC05  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006CEC08  53                        PUSH EBX
006CEC09  8A 5D 20                  MOV BL,byte ptr [EBP + 0x20]
006CEC0C  57                        PUSH EDI
006CEC0D  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
LAB_006cec10:
006CEC10  85 D2                     TEST EDX,EDX
006CEC12  7E 0F                     JLE 0x006cec23
006CEC14  8B FA                     MOV EDI,EDX
LAB_006cec16:
006CEC16  8A 01                     MOV AL,byte ptr [ECX]
006CEC18  41                        INC ECX
006CEC19  3A C3                     CMP AL,BL
006CEC1B  74 02                     JZ 0x006cec1f
006CEC1D  88 06                     MOV byte ptr [ESI],AL
LAB_006cec1f:
006CEC1F  46                        INC ESI
006CEC20  4F                        DEC EDI
006CEC21  75 F3                     JNZ 0x006cec16
LAB_006cec23:
006CEC23  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006CEC26  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006CEC29  03 F0                     ADD ESI,EAX
006CEC2B  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006CEC2E  03 CF                     ADD ECX,EDI
006CEC30  48                        DEC EAX
006CEC31  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
006CEC34  75 DA                     JNZ 0x006cec10
006CEC36  5F                        POP EDI
006CEC37  5B                        POP EBX
LAB_006cec38:
006CEC38  5E                        POP ESI
006CEC39  5D                        POP EBP
006CEC3A  C2 1C 00                  RET 0x1c
