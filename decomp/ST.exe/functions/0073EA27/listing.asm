__trandisp2:
0073EA27  80 7A 0E 05               CMP byte ptr [EDX + 0xe],0x5
0073EA2B  75 11                     JNZ 0x0073ea3e
0073EA2D  66 8B 9D 5C FF FF FF      MOV BX,word ptr [EBP + 0xffffff5c]
0073EA34  80 CF 02                  OR BH,0x2
0073EA37  80 E7 FE                  AND BH,0xfe
0073EA3A  B3 3F                     MOV BL,0x3f
0073EA3C  EB 04                     JMP 0x0073ea42
LAB_0073ea3e:
0073EA3E  66 BB 3F 13               MOV BX,0x133f
LAB_0073ea42:
0073EA42  66 89 9D 5E FF FF FF      MOV word ptr [EBP + 0xffffff5e],BX
0073EA49  D9 AD 5E FF FF FF         FLDCW word ptr [EBP + 0xffffff5e]
0073EA4F  BB 2D 23 7F 00            MOV EBX,0x7f232d
0073EA54  D9 E5                     FXAM
0073EA56  89 95 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EDX
0073EA5C  9B DD BD 60 FF FF FF      FSTSW word ptr [EBP + 0xffffff60]
0073EA63  C6 85 70 FF FF FF 00      MOV byte ptr [EBP + 0xffffff70],0x0
0073EA6A  D9 C9                     FXCH
0073EA6C  8A 8D 61 FF FF FF         MOV CL,byte ptr [EBP + 0xffffff61]
0073EA72  D9 E5                     FXAM
0073EA74  9B DD BD 60 FF FF FF      FSTSW word ptr [EBP + 0xffffff60]
0073EA7B  D9 C9                     FXCH
0073EA7D  8A AD 61 FF FF FF         MOV CH,byte ptr [EBP + 0xffffff61]
0073EA83  D0 E5                     SHL CH,0x1
0073EA85  D0 FD                     SAR CH,0x1
0073EA87  D0 C5                     ROL CH,0x1
0073EA89  8A C5                     MOV AL,CH
0073EA8B  24 0F                     AND AL,0xf
0073EA8D  D7                        XLAT EBX
0073EA8E  8A E0                     MOV AH,AL
0073EA90  D0 E1                     SHL CL,0x1
0073EA92  D0 F9                     SAR CL,0x1
0073EA94  D0 C1                     ROL CL,0x1
0073EA96  8A C1                     MOV AL,CL
0073EA98  24 0F                     AND AL,0xf
0073EA9A  D7                        XLAT EBX
0073EA9B  D0 E4                     SHL AH,0x1
0073EA9D  D0 E4                     SHL AH,0x1
0073EA9F  0A C4                     OR AL,AH
0073EAA1  0F BE C0                  MOVSX EAX,AL
0073EAA4  81 E1 04 04 00 00         AND ECX,0x404
0073EAAA  8B DA                     MOV EBX,EDX
0073EAAC  03 D8                     ADD EBX,EAX
0073EAAE  83 C3 10                  ADD EBX,0x10
0073EAB1  FF 23                     JMP dword ptr [EBX]
