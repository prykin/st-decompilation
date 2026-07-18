__trandisp1:
0073E9C0  80 7A 0E 05               CMP byte ptr [EDX + 0xe],0x5
0073E9C4  75 11                     JNZ 0x0073e9d7
0073E9C6  66 8B 9D 5C FF FF FF      MOV BX,word ptr [EBP + 0xffffff5c]
0073E9CD  80 CF 02                  OR BH,0x2
0073E9D0  80 E7 FE                  AND BH,0xfe
0073E9D3  B3 3F                     MOV BL,0x3f
0073E9D5  EB 04                     JMP 0x0073e9db
LAB_0073e9d7:
0073E9D7  66 BB 3F 13               MOV BX,0x133f
LAB_0073e9db:
0073E9DB  66 89 9D 5E FF FF FF      MOV word ptr [EBP + 0xffffff5e],BX
0073E9E2  D9 AD 5E FF FF FF         FLDCW word ptr [EBP + 0xffffff5e]
0073E9E8  BB 2D 23 7F 00            MOV EBX,0x7f232d
0073E9ED  D9 E5                     FXAM
0073E9EF  89 95 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EDX
0073E9F5  9B DD BD 60 FF FF FF      FSTSW word ptr [EBP + 0xffffff60]
0073E9FC  C6 85 70 FF FF FF 00      MOV byte ptr [EBP + 0xffffff70],0x0
0073EA03  9B                        WAIT
0073EA04  8A 8D 61 FF FF FF         MOV CL,byte ptr [EBP + 0xffffff61]
0073EA0A  D0 E1                     SHL CL,0x1
0073EA0C  D0 F9                     SAR CL,0x1
0073EA0E  D0 C1                     ROL CL,0x1
0073EA10  8A C1                     MOV AL,CL
0073EA12  24 0F                     AND AL,0xf
0073EA14  D7                        XLAT EBX
0073EA15  0F BE C0                  MOVSX EAX,AL
0073EA18  81 E1 04 04 00 00         AND ECX,0x404
0073EA1E  8B DA                     MOV EBX,EDX
0073EA20  03 D8                     ADD EBX,EAX
0073EA22  83 C3 10                  ADD EBX,0x10
0073EA25  FF 23                     JMP dword ptr [EBX]
