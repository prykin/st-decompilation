FUN_0057bc50:
0057BC50  55                        PUSH EBP
0057BC51  8B EC                     MOV EBP,ESP
0057BC53  53                        PUSH EBX
0057BC54  56                        PUSH ESI
0057BC55  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
0057BC58  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0057BC5D  8B CE                     MOV ECX,ESI
0057BC5F  57                        PUSH EDI
0057BC60  0F AF CE                  IMUL ECX,ESI
0057BC63  F7 E9                     IMUL ECX
0057BC65  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
0057BC68  8B CA                     MOV ECX,EDX
0057BC6A  8B D7                     MOV EDX,EDI
0057BC6C  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
0057BC6F  0F AF D7                  IMUL EDX,EDI
0057BC72  C1 F9 0C                  SAR ECX,0xc
0057BC75  8B C1                     MOV EAX,ECX
0057BC77  C1 E8 1F                  SHR EAX,0x1f
0057BC7A  03 C8                     ADD ECX,EAX
0057BC7C  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0057BC81  F7 EA                     IMUL EDX
0057BC83  C1 FA 0C                  SAR EDX,0xc
0057BC86  8B C2                     MOV EAX,EDX
0057BC88  03 D1                     ADD EDX,ECX
0057BC8A  8B CB                     MOV ECX,EBX
0057BC8C  0F AF CB                  IMUL ECX,EBX
0057BC8F  C1 E8 1F                  SHR EAX,0x1f
0057BC92  03 C2                     ADD EAX,EDX
0057BC94  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
0057BC97  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0057BC9C  F7 E9                     IMUL ECX
0057BC9E  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0057BCA1  C1 FA 0C                  SAR EDX,0xc
0057BCA4  8B CA                     MOV ECX,EDX
0057BCA6  03 D0                     ADD EDX,EAX
0057BCA8  C1 E9 1F                  SHR ECX,0x1f
0057BCAB  03 CA                     ADD ECX,EDX
0057BCAD  74 2B                     JZ 0x0057bcda
0057BCAF  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0057BCB2  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0057BCB5  2B C2                     SUB EAX,EDX
0057BCB7  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
0057BCBA  0F AF C6                  IMUL EAX,ESI
0057BCBD  2B 55 0C                  SUB EDX,dword ptr [EBP + 0xc]
0057BCC0  0F AF D7                  IMUL EDX,EDI
0057BCC3  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0057BCC6  03 C2                     ADD EAX,EDX
0057BCC8  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
0057BCCB  2B D7                     SUB EDX,EDI
0057BCCD  5F                        POP EDI
0057BCCE  0F AF D3                  IMUL EDX,EBX
0057BCD1  03 C2                     ADD EAX,EDX
0057BCD3  5E                        POP ESI
0057BCD4  99                        CDQ
0057BCD5  F7 F9                     IDIV ECX
0057BCD7  5B                        POP EBX
0057BCD8  5D                        POP EBP
0057BCD9  C3                        RET
LAB_0057bcda:
0057BCDA  5F                        POP EDI
0057BCDB  5E                        POP ESI
0057BCDC  8B C1                     MOV EAX,ECX
0057BCDE  5B                        POP EBX
0057BCDF  5D                        POP EBP
0057BCE0  C3                        RET
