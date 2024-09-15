.PHONY: clean All

All:
	@echo "----------Building project:[ camera - Debug ]----------"
	@cd "camera" && "$(MAKE)" -f  "camera.mk"
clean:
	@echo "----------Cleaning project:[ camera - Debug ]----------"
	@cd "camera" && "$(MAKE)" -f  "camera.mk" clean
